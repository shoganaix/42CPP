/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:17:07 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 16:10:23 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    std::string name;
    
    public:
    Zombie(void); //
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void); // tiene que estar priv??

    //Zombie* newZombie(std::string name);
    //void randomChump(std::string name);

    //los he puesto fuera porque son archivos aparte pero he visto que la gente los define dentro??
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

 #endif