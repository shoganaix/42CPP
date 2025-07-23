/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:17:07 by usuario           #+#    #+#             */
/*   Updated: 2025/07/23 14:47:37 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
        std::string name;
    
    public:
        Zombie(std::string name);
        ~Zombie(void);

        void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

 #endif