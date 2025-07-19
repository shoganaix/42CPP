/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:17:07 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 18:36:48 by usuario          ###   ########.fr       */
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
        //por que tengo que hacere un setter y no puedo utilizar:
        //Zombie(std::string name);

};

Zombie* zombieHorde(int N, std::string name);

 #endif