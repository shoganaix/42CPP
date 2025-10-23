/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:07 by usuario           #+#    #+#             */
/*   Updated: 2025/10/23 18:04:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    ShrubberyCreationForm shrubbery("Tree");
    RobotomyRequestForm robotomy("Mort");
    PresidentialPardonForm presidential("House");
    Bureaucrat mike("Mike", 150);

    std::cout << "\n --------------------- \n\n";
    try
    {
        std::cout << mike << std::endl;
		std::cout << shrubbery << std::endl;
		mike.signForm(shrubbery);
		mike.executeForm(shrubbery);
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        mike.setGrade(140);
        std::cout << mike << std::endl;
		std::cout << shrubbery << std::endl;
		mike.signForm(shrubbery);
		mike.executeForm(shrubbery);
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        mike.setGrade(75);
        std::cout << mike << std::endl;
		std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
		mike.signForm(shrubbery);
		mike.executeForm(shrubbery);
        mike.signForm(robotomy);
		mike.executeForm(robotomy);
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        mike.setGrade(70);
        std::cout << mike << std::endl;
		std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
		mike.signForm(shrubbery);
		mike.executeForm(shrubbery);
        mike.signForm(robotomy);
		mike.executeForm(robotomy);
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        mike.setGrade(40);
        std::cout << mike << std::endl;
		std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << presidential << std::endl;
		mike.signForm(shrubbery);
		mike.executeForm(shrubbery);
        mike.signForm(robotomy);
		mike.executeForm(robotomy);
        mike.signForm(presidential);

        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

        try
    {
        mike.setGrade(20);
        std::cout << mike << std::endl;
		std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << presidential << std::endl;
		mike.signForm(shrubbery);
		mike.executeForm(shrubbery);
        mike.signForm(robotomy);
		mike.executeForm(robotomy);
        mike.signForm(presidential);
        mike.executeForm(presidential);

        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

            try
    {
        mike.setGrade(2);
        std::cout << mike << std::endl;
		std::cout << shrubbery << std::endl;
        std::cout << robotomy << std::endl;
        std::cout << presidential << std::endl;
		mike.signForm(shrubbery);
		mike.executeForm(shrubbery);
        mike.signForm(robotomy);
		mike.executeForm(robotomy);
        mike.signForm(presidential);
        mike.executeForm(presidential);

        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";
}
