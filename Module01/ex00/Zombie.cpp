/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:17:04 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:31:51 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string argName)
{
    this->name = argName;
    std::cout <<"ZoooombieeE " << this->name << " AliiiivE, MooorrE BraiiinnzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout <<"ZoooombieeE " << this->name << " DeeeaaD, No MooorrE BraiiinnzZ..." << std::endl;
}

void Zombie:: announce()
{
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
