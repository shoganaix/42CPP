/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:55:58 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:26:44 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    // "Your program must take a file as an argument"
    if (argc != 2)
    {
        std::cerr << "\033[31m[Error]:\033[0m Program must be called with one file: ./btc <input.txt>" << std::endl;
        return (1);
    }

    try
    {
        BitcoinExchange btc("data.csv");
        
        std::ifstream infile(argv[1]);
        if (!infile.is_open())
        {
            throw fileNotFound();
            //std::cerr << "\033[31m[Error]:\033[0m Could not open input file" << std::endl;
            return (1);
        }

        std::string line;
        
        std::getline(infile, line);
        line.erase(0, line.find_first_not_of(" \t"));
        line.erase(line.find_last_not_of(" \t") + 1);

        if (line != "date | value")
            std::cout << "\033[31m[Error]:\033[0m Bad header => " << line << std::endl;
        
        while (std::getline(infile, line))
        {
            // Ignore new lines
            if (line.empty())
                continue;

            std::stringstream ss(line);
            std::string date, valueStr;

            // Must be separated by | -> (relocated from loadDatebase())
            if (!std::getline(ss, date, '|') || !std::getline(ss, valueStr))
            {
                std::cout << "\033[31m[Error]:\033[0m Bad input => " << line << std::endl;
                continue;
            }

            // Trim spaces (relocated from loadDatebase())
            date.erase(0, date.find_first_not_of(" "));
            date.erase(date.find_last_not_of(" ") + 1);
            valueStr.erase(0, valueStr.find_first_not_of(" "));
            valueStr.erase(valueStr.find_last_not_of(" ") + 1);

            double value;
            // A valid value must be either a float or a positive integer, between 0 and 1000.
            if (!btc.validValue(valueStr, value)) 
            {
                std::cout << "\033[31m[Error]:\033[0m Not a valid number." << std::endl;
                continue;
            }
            
            // A valid date will always be in the following format: Year-Month-Day.
            if (!btc.validDate(date)) 
            {
                std::cout << "\033[31m[Error]:\033[0m Not a valid date." << std::endl;
                continue;
            }
            double rate = btc.getValue(date);
            double result = value * rate;
            std::cout << date << " => " << value << " = "
                      << std::fixed << std::setprecision(1) << result << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }

    return (0);
}