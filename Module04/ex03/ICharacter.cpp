/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:52:12 by msoriano          #+#    #+#             */
/*   Updated: 2025/10/17 18:05:52 by root             ###   ########.fr       */
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