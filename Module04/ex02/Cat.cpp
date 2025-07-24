/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:28:11 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 15:28:50 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "\033[33mCat\033[0m Constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
    std::cout << "\033[33mCat\033[0m Copy Constructor called" << std::endl;
    brain = new Brain(*cat.brain);
    /*
     * DEEP COPY:
     * Muy importante porque brain es un puntero. 
     * Si no hicieras esto, tanto el objeto copiado como el original compartirían el mismo Brain 
     * 💥 error cuando se destruya.
    */
}

Cat& Cat::operator=(const Cat& cat)
{
    if (this != &cat)
    {
        Animal::operator=(cat);
        if (brain)
            delete brain;
        brain = new Brain(*cat.brain);
    }    return *this;
    return *this;
}

Cat::~Cat() 
{
    std::cout << "\033[33mCat\033[0m Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "\033[33mCat:\033[0m Meooooow... I'm a cat, see? I knocked all your stuff off the table. On purpose." << std::endl;
}