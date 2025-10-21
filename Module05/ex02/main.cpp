/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:07 by usuario           #+#    #+#             */
/*   Updated: 2025/10/21 19:57:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    
    ShrubberyCreationForm shrubbery("Home");
	//RobotomyRequestForm robotomy("Morty");
	//PresidentialPardonForm pardon("Rick Sanchez");
	Bureaucrat mike("Mike", 150);
	//Bureaucrat jon("Jon", 120);
	//Bureaucrat steve("Steve", 3);
	
    std::cout << "\n --------------------- \n\n";
    try
    {
        std::cout << mike << std::endl;
		std::cout << shrubbery << std::endl;
		//std::cout << robotomy << std::endl;
		//std::cout << pardon << std::endl;
		mike.executeForm(shrubbery);
		//mike.executeForm(robotomy);
		//mike.executeForm(pardon);
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";
}
