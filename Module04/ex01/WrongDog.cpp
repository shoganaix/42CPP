/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:16:26 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 14:24:05 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    type = "WrongDog";
    std::cout << "\033[33mWrongDog\033[0m Constructor called" << std::endl;
}

WrongDog::WrongDog(WrongDog const &wrongDog)
{
    std::cout << "\033[33mWrongDog\033[0m Copy Constructor called" << std::endl;
    *this = wrongDog;
}

WrongDog& WrongDog::operator=(const WrongDog& wrongDog)
{
    WrongAnimal::operator=(wrongDog);
    return *this;
}

WrongDog::~WrongDog() 
{
    std::cout << "\033[33mWrongDog\033[0m Destructor called" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << "\033[33mWrongDog:\033[0m Baa! Wait—no, woof?? I'm a dog, definitely." << std::endl;
}