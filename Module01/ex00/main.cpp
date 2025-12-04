/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:16:35 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:31:46 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
    Zombie* z0 = newZombie("Biter");
    z0->announce();
    z0->announce();
    z0->announce();
    delete z0;

    randomChump("Chumpy");


    Zombie z = Zombie("");
    z.announce();

    Zombie* z2 = newZombie("Fred");
    z2->announce();

    delete z2;
}