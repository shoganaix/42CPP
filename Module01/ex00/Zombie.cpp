/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:17:04 by usuario           #+#    #+#             */
/*   Updated: 2025/07/18 13:48:18 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string name) : name(name) {
    std::cout <<"ZoooombieeE " << name << " AliiiivE, MooorrE BraiiinnzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout <<"ZoooombieeE " << name << " DeeeaaD, No MooorrE BraiiinnzZ..." << std::endl;
}

void Zombie:: announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
