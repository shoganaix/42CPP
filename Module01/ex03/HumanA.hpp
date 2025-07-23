/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:26:35 by usuario           #+#    #+#             */
/*   Updated: 2025/07/23 14:48:19 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
        std::string name;
        Weapon &weapon;
            //Weapon weapon; 
            /*
            no puede ser asi porque se guarda una copia interna de
            lo que habia y cualquier cambio (utilizacion de set type) 
            no se reflejará en Human.
            */ 
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);

        void attack(void);
};

 #endif