/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:25:39 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:32:11 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
        
        Weapon club2 = Weapon(""); //
		HumanA bobby("Bobby", club2); //
		bobby.attack(); //
		
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
        HumanB tom("Tom"); //
        tom.attack(); //
        
		Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}