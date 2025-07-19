/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:16:58 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 18:22:24 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string newZName) 
{
	return (new Zombie(newZName)); 
	//reserva memoria en el heap → se necesita liberar con delete

	//diferencias entre llamar a new y simplemente hacer Zombie
}