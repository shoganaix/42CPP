/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:52:12 by msoriano          #+#    #+#             */
/*   Updated: 2025/09/10 21:24:14 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character Constructor called" << std::endl;
    *this->slots = NULL;
    this->name = "default";
}
Character(std::string &name)
{
    std::cout << "Character Name Constructor called" << std::endl;
    *this->slots = NULL;
    this->name = name;
}
Character::Character(const Character& character)
{
    std::cout << "Character Copy Constructor called" << std::endl;
    this->name = character.name;
    for(int i = 0; i < 4; i++)
    {
        if (this->slots[i])
            this->slots[i] = character.slots[i];
    }
    std::cout << "Character Copied" << std::endl;
}

Character& Character::operator=(const Character& character)
{
    std::cout << "Character Operator called" << std::endl;
    //Character::operator=(character);
    this->type = character.type;
    return *this;
}

Character::~Character()
{
    std::cout << "Character Destructor called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if (this->slots[i])
            delete this->slots[i];
    }
    std::cout << "Character Destroyed" << std::endl;
}

std::string const &getName() const
{
    return(this->name);
}

void setName(std::string &name)
{
    this->name = name;
}
        
void equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if (m && this->slots[i] == NULL)
            if(this->slots[i])
                this->slots[i] =m.clone();
            else
                this->slots[i] =m;
            std::cout << "Equipped" <<  this->name << "at index" << i << std::endl;
            return ;
    }
    if (m)
        std::cout << "Error: Inventory full" << std::endl;
    else
        std::cout << "Error: Invalid Materia" << std::endl;
    if (!this->slots(m))
        delete m;

}
void unequip(int idx)
{

}
void use(int idx, ICharacter& target)
{
    
}



