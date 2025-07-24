/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:36:22 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 15:29:35 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "\033[33mWrongCat\033[0m Constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &wrongCat)
{
    std::cout << "\033[33mWrongCat\033[0m Copy Constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongCat)
{
    WrongAnimal::operator=(wrongCat);
    return *this;
}

WrongCat::~WrongCat() 
{
    std::cout << "\033[33mWrongCat\033[0m Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "\033[33mWrongCat:\033[0m Ribbit! Wait—no, meow? I'm a cat, I swear *tongue flicks at a fly*" << std::endl;
}