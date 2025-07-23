/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:26:00 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/23 17:33:42 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[33mBrain\033[0m Constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
    *this = brain;
    std::cout << "\033[33mBrain\033[0m Copy Constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
    if (this != &brain)
        *this = brain;
    return *this;
}

Brain::~Brain()
{
    std::cout << "\033[33mBrain\033[0m Destructor called" << std::endl;
}