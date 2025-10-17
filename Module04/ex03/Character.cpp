/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:52:12 by msoriano          #+#    #+#             */
/*   Updated: 2025/10/17 18:18:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << GREEN << "Character Constructor called" << RESET << std::endl;
    *this->slots = NULL;
    this->name = "default";
    std::cout << "Character '" << getName() << "' is born" << std::endl;

}
Character::Character(std::string const &name)
{
    std::cout << GREEN << "Character Name Constructor called" << RESET << std::endl;
    this->name = name;
    *this->slots = NULL;
    std::cout << "Character '" << getName() << "' is born" << std::endl;
}
Character::Character(const Character& character) :ICharacter(character)
{
    std::cout << GREEN << "Character Copy Constructor called" << RESET << std::endl;
    this->name = character.name;
    for(int i = 0; i < 4; i++)
    {
        if (this->slots[i])
            this->slots[i] = character.slots[i];
    }
    std::cout << "Character '" << character.name <<"' has been copied" << std::endl;
}

Character& Character::operator=(const Character& character)
{
    std::cout << YELLOW << "Character Operator called" << RESET << std::endl;
    //Character::operator=(character);
    this->name = character.name;
    return *this;
}

Character::~Character()
{
    std::cout << RED << "Character Destructor called" << RESET << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if (this->slots[i])
            delete this->slots[i];
    }
    std::cout << "Character '" << getName() << "' destroyed" << std::endl;
}

std::string const &Character::getName() const
{
    return(this->name);
}

void Character::setName(std::string &name)
{
    this->name = name;
}
        
void Character::equip(AMateria* materia)
{
    for(int i = 0; i < 4; i++)
    {
        if (materia && this->slots[i] == NULL)
        {
            if(this->slots[i])
                this->slots[i] =materia->clone();
            else
                this->slots[i] =materia;
            std::cout << "Equipped " <<  materia->getType() << " at index " << i << std::endl;
            return ;
        }
    }
    if (materia)
        std::cout << "Error: Inventory full" << std::endl;
    else
        std::cout << "Error: Invalid Materia" << std::endl;

    bool equipped = false;
    for (int i = 0; i < 4; i++)
	{
		if (this->slots[i] == materia)
        equipped = true;
        break;	
    }
    if (!equipped)
        delete materia;
}
void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->slots[idx])
	{
		std::cout << "Unequipped " << this->slots[idx]->getType() << " from " << this->name << "'s inventory at index " << idx << std::endl;
		this->slots[idx] = NULL;
	}
	else if (idx < 0 || idx >= 4)
		std::cout << "Cannot unequip materia, invalid index " << idx << std::endl;
	else
		std::cout << "Cannot unequip materia, index " << idx << " is already empty!" << std::endl;
}
void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->slots[idx])
		this->slots[idx]->use(target);
	else if (idx < 0 || idx >= 4)
		std::cout << "Cannot use materia, invalid index " << idx << std::endl;
	else
		std::cout << "Cannot use materia, index " << idx << " is empty!" << std::endl;
 
}



