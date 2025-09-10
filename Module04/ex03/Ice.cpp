/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:14:52 by msoriano          #+#    #+#             */
/*   Updated: 2025/09/10 19:41:24 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice Constructor called" << std::endl;
    type = "ice";
}
Ice::Ice(const Ice& ice)
{
    std::cout << "Ice Copy Constructor called" << std::endl;
    *this = ice;
}

Ice& Ice::operator=(const Ice& ice)
{
    std::cout << "Ice Operator called" << std::endl;
    //Ice::operator=(ice);
    this->type = ice.type;
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor called" << std::endl;
}

Ice* Ice::clone() const
{
    return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << &target.getName() << " *" << std::endl;
}
