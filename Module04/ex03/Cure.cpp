/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:14:52 by msoriano          #+#    #+#             */
/*   Updated: 2025/09/10 19:41:42 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure Constructor called" << std::endl;
    type = "cure";
}
Cure::Cure(const Cure& cure)
{
    std::cout << "Cure Copy Constructor called" << std::endl;
    *this = cure;
}

Cure& Cure::operator=(const Cure& cure)
{
    std::cout << "Cure Operator called" << std::endl;
    //Cure::operator=(cure);
    this->type = cure.type;
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor called" << std::endl;
}

Cure* Cure::clone() const
{
    return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "*  heals " << target.getName() << "'s wounds *" << std::endl;
}
