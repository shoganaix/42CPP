/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:20 by usuario           #+#    #+#             */
/*   Updated: 2025/07/24 15:29:01 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "\033[33m" << type << "\033[0m Constructor() called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
    if (this != &animal)
        type = animal.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
    if (type == "")
        std::cout << "\033[33mUndefined Creature\033[0m lets out a final shriek... It's now dead." << std::endl;
    else
        std::cout << "\033[33m" << type << "\033[0m has met its end... It's now dead." << std::endl;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

const std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    if (type == "")
        std::cout << "\033[33mUndefined Creature:\033[0m *emits grotesque and unearthly sounds*" << std::endl;
    else
        std::cout << "\033[33m" << type << "\033[0m: I'm a " << type << "! I make all sorts of sounds, like... uhh... ROOOARR!" << std::endl;
}