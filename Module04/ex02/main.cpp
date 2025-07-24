/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:09:03 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 15:55:11 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    /*
     * -> no longer use: 
     * Animal a;
     * -> instead use:
     * Dog d;
     * Cat c;
     */
    std::cout << "\n\033[1;33m----- Creation -----\033[0m" << std::endl;

    // const Animal* a = new Animal();          // ERROR: cannot instantiate abstract class
    // const Animal* dr = new Animal("Dragon"); // ERROR: ""
    
    const Animal* d = new Dog();
    std::cout << std::endl;
    const Animal* c = new Cat();
    std::cout << std::endl;

    std::cout << "\n\033[1;33m----- Animals show their type -----\033[0m" << std::endl;
    std::cout << "Animal 'd' is a \033[33m" << d->getType() << "\033[0m!" << std::endl;
    std::cout << "Animal 'c' is a \033[33m" << c->getType() << "\033[0m!" << std::endl;
    std::cout << std::endl;

    std::cout << "\n\033[1;33m----- Animals make sounds -----\033[0m" << std::endl;
    d->makeSound();
    std::cout << std::endl;
    c->makeSound();
    std::cout << std::endl;

    std::cout << "\n\033[1;33m----- Destroy -----\033[0m" << std::endl;
    delete d;
    std::cout << std::endl;
    delete c;
    std::cout << std::endl;


    std::cout << "\n\033[1;33m----------------------- More Tests --------------------------\033[0m" << std::endl;
    std::cout << "\n\033[1;33m----- Creation -----\033[0m" << std::endl;
    Cat		Gattino;
	Dog		Rex;

    std::cout << "\n\033[1;33m----- Get types -----\033[0m" << std::endl;
	std::cout << Gattino.getType() << " " << std::endl;
	std::cout << Rex.getType() << " " << std::endl;

    std::cout << "\n\033[1;33m----- Makes sound -----\033[0m" << std::endl;
	Gattino.makeSound();
	Rex.makeSound();

    std::cout << "\n\033[1;33m----- Automatic Destruction -----\033[0m" << std::endl;

    return (0);
}