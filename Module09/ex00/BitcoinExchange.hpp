/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:58:33 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/02 18:40:56 by msoriano         ###   ########.fr       */
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

class BitcoinExchange
{
    private:
             std::map <std::string, double> database; // precision for bitcoin
             
             bool validDate(const std::string &date) const;
             bool validFormatAndValue(const std::string &str, double &value) const;
             
             void loadDatabase(const std::string &filename);             
             
             public:
                BitcoinExchange(); // must take 1 csv file as an argument
                BitcoinExchange(const char *file);
                BitcoinExchange(const BitcoinExchange &other);
                BitcoinExchange &operator=(const BitcoinExchange &other);
                ~BitcoinExchange();
                
                
                class InvalidFormat : public std::exception
                {
                    public:
                    const char *what() const throw() 
                    {
                        return ("\033[31m[EXCEPTION]\033[30m CSV file is NOT following a valid format: must follow the format [date | value]");
                        }
                    };
                    
                    class InvalidDate : public std::exception
                    {
                        public:
                        const char *what() const throw() 
                        {
                            return ("\033[31m[EXCEPTION]\033[30m Dates in CSV file are NOT following a valid format: must follow the format [Year-Month-Day]");
                        }
                    };

                    class InvalidValue : public std::exception
                    {
                        public:
                        const char *what() const throw() 
                        {
                            return ("\033[31m[EXCEPTION]\033[30m Values in CSV file are NOT following a valid format: must be either a float or a positive integer, between 0 and 1000.");
                        }
                    };
                    
                    double getValue() const;
};

#endif

