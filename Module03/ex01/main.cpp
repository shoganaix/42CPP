/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:07 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:31:09 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n\033[1;33m----- Creating a ClapTrap -----\033[0m" << std::endl;
    ClapTrap clap("CL4P-TP");

    std::cout << "\n\033[1;33m----- Creating a ScavTrap -----\033[0m" << std::endl;
    ScavTrap scav("SC4V-TP");

    std::cout << "\n\033[1;33m----- Combat Actions -----\033[0m" << std::endl;
    clap.attack("Dummy");
    scav.attack("Dummy");

    clap.takeDamage(3);
    scav.takeDamage(15);

    clap.beRepaired(2);
    scav.beRepaired(10);

    std::cout << "\n\033[1;33m----- Special Ability -----\033[0m" << std::endl;
    scav.guardGate();

    std::cout << "\n\033[1;33m----- Destruction -----\033[0m" << std::endl;
    return (0);
}