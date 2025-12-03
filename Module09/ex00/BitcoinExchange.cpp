/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:58:20 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/03 18:55:32 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
    A leap year is divisible by 4, but not by 100, unless it is also divisible by 400
     Example: 
        2024 is a leap year because it's divisible by 4.
        1900 was not a leap year because it is divisible by 100 but not by 400
*/
bool isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

/*
    "A valid date will always be in the following format: Year-Month-Day"
    We also check that the date exists (feb 30th NOT real)
*/
bool BitcoinExchange::validDate(const std::string &date) const
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-') // [....-..-..]
        return (false);

    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if (month < 1 || month > 12 || day < 1 || day > 31)
        return (false);
    
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear(year))
        daysInMonth[1] = 29;

    if (day > daysInMonth[month - 1])
        return (false);
    return (true);
}

/*
    A valid value must be either a float or a positive integer, between 0 and 1000
*/
bool BitcoinExchange::validValue(const std::string &valueStr, double &value) const
{
    // Convert str to double
    value = std::atof(valueStr.c_str());
    
    // Is it empty?
    if (valueStr.empty())
        return false;

    if (value < 0 || value > 1000)
        return (false);

    //Is it digit, + or .?
    for (size_t i = 0; i < valueStr.size(); ++i)
    {
        if (!isdigit(valueStr[i]) && valueStr[i] != '.' && valueStr[i] != '+')
            return false;
    }

    return (true);
}


/*
    "The program name is btc.
     This program must use a database in csv format"
*/
void BitcoinExchange::loadDatabase(const std::string &filename)
{
    std::ifstream file(filename.c_str());

    if (!file.is_open())
        throw fileNotFound();
    
    std::string line;

    // Skip header ("date,exchange_rate")
    std::getline(file, line);

    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string date, valueStr;

        // Must be separated by ',' ?
        if (!std::getline(ss, date, ',') || !std::getline(ss, valueStr))
            continue;

        // Trim spaces
        date.erase(0, date.find_first_not_of(" "));
        date.erase(date.find_last_not_of(" ") + 1);
        valueStr.erase(0, valueStr.find_first_not_of(" "));
        valueStr.erase(valueStr.find_last_not_of(" ") + 1);

        double value;
        if (!validDate(date) || !validValue(valueStr, value))
            continue;

        database[date] = value;
    }
}

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(const char *file)
{
    loadDatabase(file);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
        this->database = other.database;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {
}


/*
    "If the date used in the input does not exist in your DB then you 
        must use the closest date contained in your DB. 
     Be careful to use the lower date and not the upper one."

    MEANING IF DATE NOT EXACT ALWAYS RETURN THE EALIER DATE !
*/
double BitcoinExchange::getValue(const std::string &date) const
{
/*  
    auto it = database.lower_bound(date);

    C++ wont let us use 'auto' keyword which automatically deduces the type of iterator:
        - Shorter than  writing 'std::map<std::string, double>::const_iterator' =
        - Works even if the map type changes or the method is const
    lower_bound() returns an iterator to the first element >= date
*/
    std::map<std::string, double>::const_iterator it = database.lower_bound(date);

    //There are no dates >=  or it->date is not = date
    if (it == database.end() || it->first != date)
    {
        // If it points to first element there is no earlier date
        if (it == database.begin())
                return (0);
        --it;
    }
    // it->first is the date (key) | it->second the value 
    return it->second;
}