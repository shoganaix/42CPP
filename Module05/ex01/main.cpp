/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:07 by usuario           #+#    #+#             */
/*   Updated: 2025/10/23 18:02:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
        std::cout << "\n --------------------- \n\n";
    try
    {
        Form form_0("A0", 0, 151, 0);
		std::cout << form_0;
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        Bureaucrat alice ("Alice", 21);
        std::cout << alice;
        Form form_1("B1", 1, 20, 45);
        std::cout << form_1;
        alice.signForm(form_1);
		//form_1.beSigned(alice);
		form_1.setIsSigned(false);
        std::cout << form_1;
        alice.signForm(form_1);
		//form_1.beSigned(alice);
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        Bureaucrat jonh("Jonh", 20);
		Form form_2("C2", 0, 20, 45);
		std::cout << jonh;
		std::cout << form_2;
        jonh.signForm(form_2);
		//form_2.beSigned(jonh);
		std::cout << form_2;
        form_2.setIsSigned(false);
		std::cout << form_2;
        jonh.decrement();
        std::cout << jonh;
        jonh.signForm(form_2);
        //form_2.beSigned(jonh);
		std::cout << form_2;
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        Bureaucrat jonh("Jonh", 2);
		Form form_2("D3", 0, 5, 45);
		std::cout << jonh;
		std::cout << form_2;
        jonh.signForm(form_2);
		//form_2.beSigned(jonh);
		std::cout << form_2;
        form_2.setIsSigned(false);
		std::cout << form_2;
        jonh.decrement();
        std::cout << jonh;
        jonh.signForm(form_2);
        //form_2.beSigned(jonh);
		std::cout << form_2;
        std::cout << "\033[32mEverything went fine \033[0m" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";
}
