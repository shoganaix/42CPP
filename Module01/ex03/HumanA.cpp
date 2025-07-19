/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:25:57 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 18:20:34 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA() { //
} //

HumanA::HumanA(std::string argName, Weapon &argWeapon) 
{
    this->name = argName;
    this->weapon = &argWeapon;
}

HumanA::~HumanA() {
}

void HumanA::attack(void)
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon!" << std::endl;
}
