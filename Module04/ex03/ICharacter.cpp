/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:11:05 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 19:51:15 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << "ICharacter Empty Constructor called" << std::endl;
}
ICharacter::ICharacter(std::string name)
{
    std::cout << "ICharacter Constructor called" << std::endl;
    this->name = name;
}

ICharacter::ICharacter(std::string const & type)
{
    std::cout << "\033[33m" << type << "\033[0m ICharacter Constructor() called" << std::endl;
}

ICharacter::ICharacter(const ICharacter& iCharacter)
{
    std::cout << "ICharacter Copy Constructor called" << std::endl;
    *this = iCharacter;
}

ICharacter& ICharacter::operator=(const ICharacter& iCharacter)
{
    //return *this;
}

ICharacter::~ICharacter()
{
    std::cout << "ICharacter Destructor called" << std::endl;
}


std::string const & ICharacter::getName() const
{
    //
}

void ICharacter::equip(AMateria* m)
{
    //
}
void ICharacter::unequip(int idx)
{
    //
}

void ICharacter::use(int idx, ICharacter& target)
{
    //
}
