/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:18:07 by root              #+#    #+#             */
/*   Updated: 2025/10/23 18:31:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>

class ScalarConverter
{
    private:
        ScalarConverter(void); 
        ScalarConverter(ScalarConverter const &scalarConverter);
        ScalarConverter& operator=(const ScalarConverter &scalarConverter);

        virtual ~ScalarConverter(void) = 0;

        static bool isChar(const std::string &conversion);
        static bool isInt(const std::string &conversion);
        static bool isFloat(const std::string &conversion);
        static bool isDouble(const std::string &conversion);

        static void convertToChar(const char &c);
        static void convertToDouble(const std::string &conversion,long double nb);
        
        static void convertFromChar(const std::string &conversion);

    public:
        static void convert(const std::string &representation);
};

#endif