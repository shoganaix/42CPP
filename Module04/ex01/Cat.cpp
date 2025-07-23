/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:28:11 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/23 17:35:46 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "\033[33mCat\033[0m Constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const &cat)
{
    std::cout << "\033[33mCat\033[0m Copy Constructor called" << std::endl;
    *this = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
    Animal::operator=(cat);
    return *this;
}

Cat::~Cat() 
{
    delete brain;
    std::cout << "\033[33mCat\033[0m Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "\033[33mCat:\033[0m Meooooow... I'm a cat, see? I knocked all your stuff off the table. On purpose." << std::endl;
}