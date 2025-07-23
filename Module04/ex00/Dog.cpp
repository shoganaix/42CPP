/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:16:26 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/23 16:12:34 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "\033[33mDog\033[0m Constructor called" << std::endl;
}

Dog::Dog(Dog const &dog)
{
    std::cout << "\033[33mDog\033[0m Copy Constructor called" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(const Dog& dog)
{
    Animal::operator=(dog);
    return *this;
}

Dog::~Dog() 
{
    std::cout << "\033[33mDog\033[0m Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "\033[33mDog:\033[0m WOOF! WOOF! I'm a dog. I drool all over your stuff, but then again, I'm super cute." << std::endl;
}