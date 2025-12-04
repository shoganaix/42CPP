/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:52:12 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:30:21 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << GREEN << "iCharacter Constructor called" << RESET << std::endl;
}

ICharacter::ICharacter(const ICharacter& iCharacter)
{
    std::cout << GREEN << "ICharacter Copy Constructor called" << RESET << std::endl;
	*this = iCharacter;
}

ICharacter& ICharacter::operator=(const ICharacter& iCharacter)
{
	std::cout << YELLOW << "ICharacter Assignment Operator Called" << RESET << std::endl;
	(void)iCharacter;
	return *this;
}

ICharacter::~ICharacter() {
    std::cout << RED << "ICharacter destructor called" << RESET << std::endl;
}