/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:26:00 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 15:41:27 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[33mBrain\033[0m Constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
    std::cout << "\033[33mBrain\033[0m Copy Constructor called" << std::endl;
     *this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
 if (this != &brain)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = brain.ideas[i];
    }
    return *this;
}
    /*
    *
    * if (this != &brain)
    *    *this = brain;  
    * return *this;
    * 
    *  ⚠️ *this = brain -> ¡Esto vuelve a llamar al mismo operador!
    * 💥  -> Llamada recursiva infinita
    */

Brain::~Brain()
{
    std::cout << "\033[33mBrain\033[0m Destructor called" << std::endl;
}