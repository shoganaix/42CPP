/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:07 by usuario           #+#    #+#             */
/*   Updated: 2025/07/21 18:08:55 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) 
{
    ClapTrap robot1("SC4V-TP");
    ClapTrap robot2("CL4P-TP");

    std::cout << "\n\033[1;33m--- Turn 1 ---\033[0m" << std::endl;
    robot1.attack("CL4P-TP");
    robot2.takeDamage(0); // Does no damage because SC4V-TP's attack is set to 0

    std::cout << "\n\033[1;33m--- Turn 2 ---\033[0m" << std::endl;
    robot1.beRepaired(5);

    std::cout << "\n\033[1;33m--- Turn 3 ---\033[0m" << std::endl;
    for (int i = 0; i < 8; ++i) {
        robot1.attack("dummy");
    }

    std::cout << "\n\033[1;33m--- Turn 4 ---\033[0m" << std::endl;
    robot1.beRepaired(10); // No energy left, should do nothing

    std::cout << "\n\033[1;33m--- Turn 5 ---\033[0m" << std::endl;
    robot2.takeDamage(10);
    robot2.attack("SC4V-TP"); // robot2 has no hit points, shouldnt attack

    std::cout << "\n\033[1;33m--- End of combat ---\033[0m" << std::endl;
    return (0);
}