/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:17:04 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:31:55 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie()
{
    std::cout <<"ZoooombieeE " << this->name << " DeeeaaD, No MooorrE BraiiinnzZ..." << std::endl;
}
void Zombie:: setName(std::string setName)
{
    this->name = setName;
}
void Zombie:: announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
