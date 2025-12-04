/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:22 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:31:21 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Empty Constructor called." << std::endl;

}

ScavTrap::ScavTrap(std::string argName) :  ClapTrap()
{
    std::cout << "ScavTrap Constructor called." << std::endl;
    
    this->name = argName;
    this->health = 100;
    this->energy = 50;
    this->damage = 20;

    std::cout << "A new ScavTrap " << this->name << " is born :)" << std::endl;

    std::cout << "Starts with " << this->health << " hit points." << std::endl;
    std::cout << "Starts with " << this->energy << " energy points." << std::endl;
    std::cout << "Starts with " << this->damage << " attack points.\n" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap) : ClapTrap(scavTrap)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
    if (this != &scavTrap)
    {
        this->name = scavTrap.name;
        this->health = scavTrap.health;
        this->energy = scavTrap.energy;
        this->damage = scavTrap.damage;
    }
    return *this;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap Destructor called." << std::endl;
    std::cout << "ScavTrap " << this->name << " was DESTROYED!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy <= 0 || this->health <= 0)
        std::cout << "ScavTrap "<< this->name << " has no energy or health left. CANNOT attack " << target << "!" << std::endl;
    else
    {
        std::cout << "ScavTrap "<< this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
        this->energy--;
        std::cout << "ScavTrap "<< this->name << " has now " << this->energy << " energy points." << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has entered Gate keeper mode!" << std::endl;
}


