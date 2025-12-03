/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:58:33 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/03 17:00:42 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
--------------------------------------------------------------------------
* Once a container is used you cannot use it for the rest of the module!!

--------------------------------------------------------------------------
* WE USE MAP ON THIS ONE:
    -Sorted data stucture
    -With key AND value
--------------------------------------------------------------------------

                            WHAT IS CSV FORMAT?
-> A CSV file is short for comma-separated values
 Its a plain text format that simplifies data storage and transfer. 
 A CSV file stores data in a tabular format.

--------------------------------------------------------------------------
*/

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <map>

#include <fstream>      // std::ifstream
#include <sstream>      // std::stringstream
#include <cstdlib>      // std::atoi, std::atof
#include <cctype>       // std::isdigit
#include <iomanip>      // std::setprecision

class BitcoinExchange
{
    private:
        std::map <std::string, double> database;
        void loadDatabase(const std::string &filename);      
        
        // "Your program must take a file as an argument"
        BitcoinExchange(); // So we define default constructor private
    public:
        BitcoinExchange(const char *file);
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

        class FileNotFound : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("\033[31m[EXCEPTION]\033[0m Could not open CSV file");
                }
        };
                    
        double getValue(const std::string &date) const;
        bool validDate(const std::string &date) const;
        bool validValue(const std::string &valueStr, double &value) const;
};

#endif

