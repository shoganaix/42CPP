/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:17:07 by usuario           #+#    #+#             */
/*   Updated: 2025/07/23 14:47:45 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
        std::string name;
    
    public:
        Zombie(void);
        ~Zombie(void);

        void    announce(void);
        void    setName(std::string name); 
};

Zombie* zombieHorde(int N, std::string name);

 #endif