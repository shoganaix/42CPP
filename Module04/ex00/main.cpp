/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 18:49:07 by usuario           #+#    #+#             */
/*   Updated: 2025/07/24 15:17:38 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n\033[1;33m----- Creation -----\033[0m" << std::endl;
    const Animal* a = new Animal();
    std::cout << std::endl;
    const Animal* dr = new Animal("Dragon");
    std::cout << std::endl;
    const Animal* d = new Dog();
    std::cout << std::endl;
    const Animal* c = new Cat();
    std::cout << std::endl;
    const WrongAnimal* wd = new WrongDog();
    std::cout << std::endl;
    const WrongAnimal* wc = new WrongCat();
    std::cout << std::endl;

    std::cout << "\n\033[1;33m----- Animals show their type -----\033[0m" << std::endl;
    std::cout << "Animal 'a' is a \033[33m" << a->getType() << "\033[0m!" << std::endl;
    if (a->getType() == "")
        std::cout << "\033[33m*unidentifiable sounds*\033[0m wait a minute... what?" << std::endl;
    std::cout << "Animal 'dr' is a \033[33m" << dr->getType() << "\033[0m!" << std::endl;
    std::cout << "Animal 'd' is a \033[33m" << d->getType() << "\033[0m!" << std::endl;
    std::cout << "Animal 'c' is a \033[33m" << c->getType() << "\033[0m!" << std::endl;
    std::cout << "Animal 'wd' is a \033[33m" << wd->getType() << "\033[0m!" << std::endl;
    std::cout << "Animal 'wc' is a \033[33m" << wc->getType() << "\033[0m!" << std::endl;
    std::cout <<  std::endl;

    std::cout << "\n\033[1;33m----- Animals make sounds -----\033[0m" << std::endl;
    a->makeSound();
    std::cout << std::endl;    
    dr->makeSound();
    std::cout << std::endl;
    d->makeSound();
    std::cout << std::endl;
    c->makeSound();
    std::cout << std::endl;
    wd->makeSound();
    std::cout << std::endl;
    wc->makeSound();
    std::cout << std::endl;

    std::cout << "\n\033[1;33m----- Desroy -----\033[0m" << std::endl;
    delete a;
    std::cout << std::endl;
    delete dr; 
    std::cout << std::endl;
    delete d;
    std::cout << std::endl;
    delete c;
    std::cout << std::endl;
    delete wd;
    std::cout << std::endl;
    delete wc;

    return (0);
}
