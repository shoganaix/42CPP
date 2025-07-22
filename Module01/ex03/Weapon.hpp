/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:26:41 by usuario           #+#    #+#             */
/*   Updated: 2025/07/22 16:38:12 by msoriano         ###   ########.fr       */
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
        
        const std::string &getType() const;
        void setType(std::string type);
};

 #endif