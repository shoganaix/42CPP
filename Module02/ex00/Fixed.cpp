/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:22 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:31:33 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{ 
    std::cout << "Default constructor called" << std::endl;
    this->nbValue = 0;
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
    std::cout << "getRawBits member function called" << std::endl;
	return (this->nbValue);
}

void	Fixed::setRawBits(int const raw) 
{
	this->nbValue = raw;
}