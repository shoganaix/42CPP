/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:25:48 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 18:37:45 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string argType) 
{
    this->type = argType;
}

Weapon::~Weapon() {
}

void Weapon::setType(std::string setType)
{
    this->type = setType;
}

std::string Weapon::getType() const {
    return this->type;
}