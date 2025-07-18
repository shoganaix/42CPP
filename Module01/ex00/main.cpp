/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:16:35 by usuario           #+#    #+#             */
/*   Updated: 2025/07/18 13:55:05 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie* nwZombie = newZombie("ooF");
    nwZombie->announce();
    nwZombie->announce();
    nwZombie->announce();
    delete nwZombie;

    randomChump("Foo");
}