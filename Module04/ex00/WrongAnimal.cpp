/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:20 by usuario           #+#    #+#             */
/*   Updated: 2025/07/24 14:23:42 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "\033[33m" << type << "\033[0m WrongAnimal Constructor() called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
    *this = wrongAnimal;
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
    if (this != &wrongAnimal)
        type = wrongAnimal.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
    if (type == "")
        std::cout << "\033[33mUndefined Creature\033[0m lets out a final shriek... It's now dead." << std::endl;
    else
        std::cout << "\033[33m" << type << "\033[0m has met its end... It's now dead." << std::endl;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

const std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    if (type == "")
        std::cout << "\033[33mUndefined Creature:\033[0m *emits grotesque and unearthly sounds*" << std::endl;
    else
        std::cout << "\033[33m" << type << "\033[0m: I'm a " << type << "! I make all sorts of sounds, like... uhh... ROOOARR!" << std::endl;
}