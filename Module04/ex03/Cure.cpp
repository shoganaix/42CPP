/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:14:52 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:30:18 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << GREEN << "Cure Constructor called" << RESET << std::endl;
    type = "cure";
}
Cure::Cure(const Cure& cure): AMateria(cure)
{
    std::cout << GREEN << "Cure Copy Constructor called" << RESET << std::endl;
    *this = cure;
}

Cure& Cure::operator=(const Cure& cure)
{
    std::cout << YELLOW << "Cure Operator called" << RESET << std::endl;
    //Cure::operator=(cure);
    this->type = cure.type;
    return *this;
}

Cure::~Cure()
{
    std::cout << RED << "Cure Destructor called" << RESET << std::endl;
}

Cure* Cure::clone() const
{
    return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "*  heals " << target.getName() << "'s wounds *" << std::endl;
}
