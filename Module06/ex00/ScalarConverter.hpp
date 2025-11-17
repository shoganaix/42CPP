/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:18:07 by root              #+#    #+#             */
/*   Updated: 2025/11/17 20:21:25 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream> //entrada salida std
#include <string> //manejo de strings
#include <limits> //std::numeric_limits<int>::min()
#include <cstdlib> //std::strtol, std::strtod, std::strtof
#include <iomanip> //std::setprecision y formato numérico
#include <cmath> //std::isnan, std::isinf

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
        static bool isPseudoLiteral(const std::string &conversion);

    public:
        static void convert(const std::string &representation);
};

#endif