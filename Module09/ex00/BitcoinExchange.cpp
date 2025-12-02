/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:58:20 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/02 19:06:47 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// A leap year is divisible by 4, but not by 100, unless it is also divisible by 400
// Example: 
//          2024 is a leap year because it's divisible by 4.
//          1900 was not a leap year because it is divisible by 100 but not by 400

bool isLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

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

bool BitcoinExchange::validFormatAndValue(const std::string &str, double &value) const
{
    if (!isInt(value) || !isFloat(value))
        return (false);
    if (value < 0)
        return (false);
    if (value > 1000)
        return (false);
    return (true);
}

void BitcoinExchange::loadDatabase(const std::string &filename)
{

}

BitcoinExchange::BitcoinExchange(): {
}


void BitcoinExchange::loadDatabase(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
        throw InvalidFormat();

    std::string line;
    std::getline(file, line); // saltar header

    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string date, valueStr;
        if (!std::getline(ss, date, ',') || !std::getline(ss, valueStr))
            continue;

        double value;
        if (!validFormatAndValue(valueStr, value))
            throw InvalidValue();

        if (!validDate(date))
            throw InvalidDate();

        database[date] = value;
    }
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

double BitcoinExchange::getValue() const
{
    iterator it = database.lower_bound(date);

    if (it == database.end() || it->first != date)
    {
        if (it == database.begin())
            throw InvalidDate();
        --it;
    }

    return it->second;
}