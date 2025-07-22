/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:16:58 by usuario           #+#    #+#             */
/*   Updated: 2025/07/22 16:36:36 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
        return (NULL);
	Zombie *horde = new Zombie[N]; //crea puntero y utliza new
									
	// por que al utilizar esto no se podria llamar a un cosntrcutor con argumentos?
	// 'new Zombie[N](name);'
	
    for (int i = 0; i < N; ++i)
	{
		horde[i].setName(name);
		//horde[i].announce();
	}
	return(horde);
}