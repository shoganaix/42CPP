/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:22 by usuario           #+#    #+#             */
/*   Updated: 2025/07/21 19:15:08 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Empty Constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string argName)
{ 
    std::cout << "ClapTrap Constructor called." << std::endl;
    
    this->name = argName;
    this->health = 10;
    this->energy = 10;
    this->damage = 0;

    std::cout << "A new ClapTrap " << this->name << " is born :)" << std::endl;

    std::cout << "Starts with " << this->health << " hit points." << std::endl;
    std::cout << "Starts with " << this->energy << " energy points." << std::endl;
    std::cout << "Starts with " << this->damage << " attack points.\n" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrap)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
    if (this != &clapTrap)
    {
        this->name = clapTrap.name;
        this->health = clapTrap.health;
        this->energy = clapTrap.energy;
        this->damage = clapTrap.damage;
    }
    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap Destructor called." << std::endl;
    std::cout << "ClapTrap " << this->name << " was DESTROYED!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy <= 0 || this->health <= 0)
        std::cout << "ClapTrap "<< this->name << " has no energy or health left. CANNOT attack " << target << "!" << std::endl;
    else
    {
        std::cout << "ClapTrap "<< this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
        this->energy--;
        std::cout << "ClapTrap "<< this->name << " has now " << this->energy << " energy points." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap "<< this->name << " takes " << amount << " points of damage!" << std::endl;
	this->health -= amount;
    std::cout << "ClapTrap "<< this->name << " has now " << this->health << " hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy <= 0 || this->health <= 0)
        std::cout << "ClapTrap "<< this->name << " has no energy or health left. He CANNOT be repaired..." << std::endl;
    else
    {
        std::cout << "ClapTrap "<< this->name << " takes some time to repair. Receives " << amount << " points of health!" << std::endl;
        this->health += amount;
        std::cout << "ClapTrap "<< this->name << " has now " << this->health << " hit points." << std::endl;
        this->energy--;
        std::cout << "ClapTrap "<< this->name << " has now " << this->energy << " energy points." << std::endl;
    }
}