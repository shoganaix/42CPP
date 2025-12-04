/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:26:55 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:32:05 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
        std::string name;
        Weapon *weapon;
    
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void attack(void);
        void setWeapon(Weapon &weapon);
};

 #endif