/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:34:43 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 18:43:26 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string argName)
{
    this->name = argName;
    this->weapon = NULL;
}

HumanB::~HumanB() {
}

void HumanB::attack(void)
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon!" << std::endl;
}

void HumanB::setWeapon(Weapon &setWeapon)
{
    this->weapon = &setWeapon;
}
