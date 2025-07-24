/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:14:52 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 19:48:51 by msoriano         ###   ########.fr       */
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
    //
}

Ice::~Ice()
{
    std::cout << "Ice Destructor called" << std::endl;
}

Ice* Ice::clone() const
{
    //
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << &target << " *" << std::endl;
}
