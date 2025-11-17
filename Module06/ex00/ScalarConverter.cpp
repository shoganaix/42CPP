/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:18:07 by root              #+#    #+#             */
/*   Updated: 2025/11/17 23:36:38 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
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
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter Destructor called" << std::endl;
}

bool ScalarConverter::isChar(const std::string &conversion)
{
    return (conversion.size() == 1 && std::isprint(conversion[0]) && !std::isdigit(conversion[0]));
}

bool ScalarConverter::isInt(const std::string &conversion)
{
    char *str;
    std::strtol(conversion.c_str(), &str, 10);
    return (*str == '\0');
}

bool ScalarConverter::isFloat(const std::string &conversion)
{
    if (conversion == "-inff" || conversion == "+inff" || conversion == "nanf")
        return (true);
    char *str;
    std::strtof(conversion.c_str(), &str);
    return (*str == 'f' && *(str + 1) == '\0');

}

bool ScalarConverter::isDouble(const std::string &conversion)
{
    if (conversion == "-inf" || conversion == "+inf" || conversion == "nan")
        return (true);
    char *str;
    std::strtod(conversion.c_str(), &str);
    return (*str == '\0');
}


bool ScalarConverter::isPseudoLiteral(const std::string &conversion)
{
    return (conversion == "-inf" || conversion == "+inf" || conversion == "nan"
            || conversion == "-inff" || conversion == "+inff" || conversion == "nanf");
}

void ScalarConverter::convert(const std::string &representation)
{
    if (isPseudoLiteral(representation))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if (representation.find("nan") != std::string::npos || representation.find("nanf") != std::string::npos)
        {
             std::cout << "float: nanf" << std::endl;
             std::cout << "double: nan" << std::endl;
        }
        else if (representation == "inf" || representation == "+inf" || representation == "-inf")
        {
            std::cout << "float: " << representation << "f" << std::endl;
            std::cout << "double: " << representation << std::endl;
        }
        else if (representation == "inff" || representation == "+inff" || representation == "-inff")
        {
            std::cout << "float: " << representation << std::endl;
            std::cout << "double: " << representation.substr(0, representation.size() - 1) << std::endl;
        }
        return;
    }
    else if (isChar(representation))
    {
        //demotion cast??
        char value = static_cast<char>(representation[0]);
        if (std::isprint(value))
            std::cout << "char: '" << value << "'" << std::endl;
         else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " <<static_cast<int>(value)<< std::endl;
        std::cout << "float: " <<static_cast<float>(value) << std::endl;
        std::cout << "double: " <<static_cast<double>(value) << std::endl;
    }
    else if (isInt(representation))
    {
        long double value = std::strtold(representation.c_str(), NULL);
        if (value < 0 || value > 127)
            std::cout << "char: impossible" << std::endl;
        else
            {
                //demotion cast
                char c = static_cast<char>(value);
                if (std::isprint(c))
                    std::cout << "char: '" << c << "'" << std::endl;
                 else
                    std::cout << "char: Non displayable" << std::endl;
            }
        if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << std::atoi(representation.c_str()) << std::endl;
        if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
            std::cout << "float: impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << "float: " << std::strtof(representation.c_str(), NULL) << "f" << std::endl;
        if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max())
            std::cout << "double: impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << "double: " << std::strtod(representation.c_str(), NULL) << std::endl;
    }
    else if (isFloat(representation))
    {
        float value = std::strtold(representation.c_str(), NULL);
        if (value < 0 || value > 127)
            std::cout << "char: impossible" << std::endl;
        else
            {
                //demotion cast
                char c = static_cast<char>(value);
                if (std::isprint(c))
                    std::cout << "char: '" << c << "'" << std::endl;
                 else
                    std::cout << "char: Non displayable" << std::endl;
            }
        if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << std::atoi(representation.c_str()) << std::endl;
        if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
            std::cout << "float: impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << "float: " << std::strtof(representation.c_str(), NULL) << "f" << std::endl;
        if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max())
            std::cout << "double: impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << "double: " << std::strtod(representation.c_str(), NULL) << std::endl;
    }
    else if (isDouble(representation))
    {
        double value = std::strtold(representation.c_str(), NULL);
        if (value < 0 || value > 127)
            std::cout << "char: impossible" << std::endl;
        else
            {
                //demotion cast
                char c = static_cast<char>(value);
                if (std::isprint(c))
                    std::cout << "char: '" << c << "'" << std::endl;
                 else
                    std::cout << "char: Non displayable" << std::endl;
            }
        if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << std::atoi(representation.c_str()) << std::endl;
        if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
            std::cout << "float: impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << "float: " << std::strtof(representation.c_str(), NULL) << "f" << std::endl;
        if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max())
            std::cout << "double: impossible" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << "double: " << std::strtod(representation.c_str(), NULL) << std::endl;
    }
    else
        std::cout << "Error: invalid parameter" << std::endl;
}
