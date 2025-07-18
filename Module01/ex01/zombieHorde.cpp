/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:16:58 by usuario           #+#    #+#             */
/*   Updated: 2025/07/18 17:45:09 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
        return (NULL);
	Zombie *horde = new Zombie[N]; //crea puntero y utliza new
    for (int i = 0; i < N; ++i)
	{
		horde[i].setName(name); //he tenido que ceder y hacer un setter pero nose porque es NECESARIO
		//horde[i].announce();
	}
	return(horde);
}