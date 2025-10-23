/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:18:07 by root              #+#    #+#             */
/*   Updated: 2025/10/23 18:30:57 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter():
{
    std::cout << "ScalarConverter Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &scalarConverter)
{
    std::cout << "ScalarConverter Copy Constructor called" << std::endl;
    *this = scalarConverter;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &scalarConverter)
{
    if (this == &scalarConverter)
        return (*this);
    return (*this)
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

static bool isChar(const std::string &conversion)
{
    return (conversion.size() == 1 && std::isprint(conversion[0]) && !std::isdigit(conversion[0]));
}

static bool isInt(const std::string &conversion)
{

}

static bool isFloat(const std::string &conversion)
{

}

static bool isDouble(const std::string &conversion)
{

}

static void convertToChar(const char &c)
{

}

static void convertToDouble(const std::string &conversion,long double nb)
{
    
}
        
static void convertFromChar(const std::string &conversion)
{
    
}

static void convert(const std::string &representation)
{
    
}
