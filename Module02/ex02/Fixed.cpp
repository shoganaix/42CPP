/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:22 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:31:41 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nbValue = 0;
}

Fixed::Fixed(const float f)
{ 
    this->nbValue = roundf(f * (1 << nbBits));
}

Fixed::Fixed(const int n)
{ 
    this->nbValue =  n << nbBits;
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed::~Fixed() {
}

Fixed&	Fixed::operator=(const Fixed &fixed) 
{
    this->nbValue = fixed.getRawBits();
	return *this;
}

//Comparison operators:
bool Fixed::operator>(const Fixed &other) const
{
    return this->nbValue > other.nbValue;
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->nbValue < other.nbValue;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->nbValue >= other.nbValue;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->nbValue <= other.nbValue;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->nbValue == other.nbValue;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->nbValue != other.nbValue;
}

//Arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->nbValue + other.nbValue);
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(this->nbValue - other.nbValue);
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result.setRawBits((this->nbValue * other.nbValue) >> nbBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    result.setRawBits((this->nbValue << nbBits) / other.nbValue);
    return result;
}

//Increment/decrement
Fixed& Fixed::operator++()
{
    this->nbValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->nbValue++;
    return tmp;
}

Fixed& Fixed::operator--()
{
    this->nbValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->nbValue--;
    return tmp;
}

// Static member function min/max
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
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
