/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:16:57 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:31:17 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Empty Constructor called." << std::endl;
}

FragTrap::FragTrap(std::string argName) : ClapTrap() 
{
  std::cout << "FragTrap Constructor called." << std::endl;
    
    this->name = argName;
    this->health = 100;
    this->energy = 100;
    this->damage = 30;

    std::cout << "A new FragTrap " << this->name << " is born :)" << std::endl;

    std::cout << "Starts with " << this->health << " hit points." << std::endl;
    std::cout << "Starts with " << this->energy << " energy points." << std::endl;
    std::cout << "Starts with " << this->damage << " attack points.\n" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) 
{
   std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = fragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap &fragTrap)
{
    if (this != &fragTrap)
    {
        this->name = fragTrap.name;
        this->health = fragTrap.health;
        this->energy = fragTrap.energy;
        this->damage = fragTrap.damage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called." << std::endl;
    std::cout << "FragTrap " << this->name << " was DESTROYED!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " requests a high five! ✋" << std::endl;
}