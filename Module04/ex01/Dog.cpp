/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:16:26 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 15:37:28 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[33mDog\033[0m Constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
    std::cout << "\033[33mDog\033[0m Copy Constructor called" << std::endl;
    brain = new Brain(*dog.brain);
    /*
     * DEEP COPY:
     * Muy importante porque brain es un puntero. 
     * Si no hicieras esto, tanto el objeto copiado como el original compartirían el mismo Brain 
     * 💥 error cuando se destruya.
    */
}

Dog& Dog::operator=(const Dog& dog)
{
    if (this != &dog)
    {
        Animal::operator=(dog);
        if (brain)
            delete brain;
        brain = new Brain(*dog.brain);
    }    return *this;
    return *this;
}

Dog::~Dog() 
{
    std::cout << "\033[33mDog\033[0m Destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "\033[33mDog:\033[0m WOOF! WOOF! I'm a dog. I drool all over your stuff, but then again, I'm super cute." << std::endl;
}