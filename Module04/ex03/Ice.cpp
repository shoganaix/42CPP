/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:14:52 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:30:20 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << GREEN << "Ice Constructor called" << RESET << std::endl;
    type = "ice";
}
Ice::Ice(const Ice& ice): AMateria(ice)
{
    std::cout << GREEN << "Ice Copy Constructor called" << RESET << std::endl;
    *this = ice;
}

Ice& Ice::operator=(const Ice& ice)
{
    std::cout << YELLOW << "Ice Operator called" << RESET << std::endl;
    //Ice::operator=(ice);
    this->type = ice.type;
    return *this;
}

Ice::~Ice()
{
    std::cout << RED << "Ice Destructor called" << RESET << std::endl;
}

Ice* Ice::clone() const
{
    return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
