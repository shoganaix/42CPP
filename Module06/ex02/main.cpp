/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:56:09 by usuario           #+#    #+#             */
/*   Updated: 2025/11/19 15:49:18 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base *generate(void)
{
	int r = rand() % 3;
	if (r == 0)
		return (new A());
        //return (std::cout << "\033[1;35m[Generated]: A\033[0m" << std::endl, new A());
	else if (r == 1)
		return (new B());
        //return (std::cout << "\033[1;35m[Generated]: B\033[0m" << std::endl, new B());
	else
		return (new C());
        //return (std::cout << "\033[1;35m[Generated]: C\033[0m" << std::endl, new C());
}

// dynamic_cast<T*>(p):
// ----------------------------------------------
// Tries to cast a Base* pointer 'p' to a T* pointer
    // If 'p' points to an object of type T, returns the address
    // If not, returns nullptr

void identify(Base* p) 
{
    if (dynamic_cast<A*>(p)) 
        std::cout << "\033[1;33mA\033[0m" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "\033[1;33mB\033[0m" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "\033[1;33mC\033[0m" << std::endl;
    else
        std::cerr << "\033[1;31mUnknown type\033[0m" << std::endl;
}

// dynamic_cast<T&>(p):
//----------------------------------------------
// Tries to cast a Base& reference 'p' to a T& reference
    // - If 'p' really is of type T, returns a valid reference
    // - If not, throws a std::bad_cast exception
// *We use try/catch blocks to safely handle ("catch") this exceptions*

void identify(Base& p) 
{
    try 
    { 
        (void)dynamic_cast<A&>(p);
        std::cout << "\033[1;32mA\033[0m" << std::endl; 
    }
    catch (std::exception &e) {}
    try 
    { 
        (void)dynamic_cast<B&>(p);
        std::cout << "\033[1;32mB\033[0m" << std::endl;
    }
    catch (std::exception &e) {}
    try 
    { 
        (void)dynamic_cast<C&>(p);
        std::cout << "\033[1;32mC\033[0m" << std::endl;
    }
    catch (std::exception &e) {}
}


int main()
{
    std::cout << "\033[1;36m==============================\033[0m" << std::endl;
    std::cout << "\033[1;33m     RANDOM CLASS IDENTIFY    \033[0m" << std::endl;
    std::cout << "\033[1;36m==============================\033[0m" << std::endl << std::endl;

    for (int i = 0; i < 5; i++)
    {
        Base* ptr = generate();

        std::cout << "\033[1;33m[Identify by pointer]:\033[0m ";
        identify(ptr);

        std::cout << "\033[1;32m[Identify by reference]:\033[0m ";
        identify(*ptr);
        
        delete ptr;
        //Dynamic obj needs delete
    }
    std::cout << std::endl;
    return (0);
}