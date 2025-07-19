/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:26:41 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 18:37:52 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
        std::string type;
    
    public:
        Weapon(std::string type);
        ~Weapon(void);
        
        std::string getType() const;
        void setType(std::string type);
};

 #endif