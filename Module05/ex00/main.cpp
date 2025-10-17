/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:07 by usuario           #+#    #+#             */
/*   Updated: 2025/10/17 20:52:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bob ("Bob", 10);
        std::cout << bob;   
        Bureaucrat tom;
        std::cout << tom;
        tom.decrement();
        std::cout << tom;
        std::cout <<" Everything went fine" << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        Bureaucrat alice ("Alice", 1);
        std::cout << alice;
        alice.increment();
        std::cout << alice;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        Bureaucrat alice ("Alice", 2);
        std::cout << alice;
        alice.increment();
        std::cout << alice;
        alice.setGrade(150);
        std::cout << alice;
        alice.decrement();
        std::cout << alice;
        std::cout <<" Everything went fine" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";

    try
    {
        Bureaucrat bob ("Bob", 10);
        std::cout << bob;   
        Bureaucrat alice ("Alice", 2);
        std::cout << alice;
        alice.increment();
        std::cout << alice;
        alice.setGrade(149);
        std::cout << alice;
        alice.decrement();
        std::cout << alice;
        alice.setName("Alisson");
        alice.setGrade(10);
        std::cout << alice;
        std::cout <<"---------->Everything went fine<----------" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n --------------------- \n\n";
}
