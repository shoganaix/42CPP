/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:07 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:29:15 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    Bureaucrat  mike("Mike", 2);
    Intern	bob;
    AForm  *form;

    std::cout << "\n --------------------- \n\n";

  	try
	{
		form = bob.makeForm("Robotomy", "Balatro");
		delete form;
		form = bob.makeForm("Shrubbery", "Balala");
		delete form;
		form = bob.makeForm("Presidential", "Balatrez");
		delete form;
		form = bob.makeForm("Gnarly", "Katseye");
		delete form;
	}

    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
		form = bob.makeForm("Shrubbery", "Balatro");
        form->beSigned(mike);
	    mike.executeForm(*form);
	    delete form;

    
        form = bob.makeForm("Robotomy", "Balatrez");
	    mike.signForm(*form);
	    mike.executeForm(*form);
	    delete form;

        form = bob.makeForm("Presidential", "Balala");
	    mike.signForm(*form);
	    mike.executeForm(*form);
	    delete form;

        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";
}
