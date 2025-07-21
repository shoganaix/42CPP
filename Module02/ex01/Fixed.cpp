/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:22 by usuario           #+#    #+#             */
/*   Updated: 2025/07/21 16:40:50 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{ 
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{ 
    std::cout << "Float constructor called" << std::endl;
    this->nbValue = roundf(f * (1 << nbBits));
}

Fixed::Fixed(const int n)
{ 
    std::cout << "Int constructor called" << std::endl;
    this->nbValue =  n << nbBits;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &fixed) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->nbValue = fixed.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const 
{
	return (this->nbValue);
}

void	Fixed::setRawBits(int const raw) 
{
	this->nbValue = raw;
}

float	Fixed::toFloat() const 
{
	return ((float)this->nbValue / (float)(1 << nbBits));
}

int		Fixed::toInt() const 
{
	return (this->nbValue >> nbBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}
