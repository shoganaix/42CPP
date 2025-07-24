/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:09:03 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 15:27:09 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    //{
    //     const Animal* j = new Dog();
    //     std::cout << std::endl;
    //     const Animal* i = new Cat();
    //     std::cout << std::endl;
        
    //     delete j;
    //     std::cout << std::endl;
    //     delete i;
    //     std::cout << std::endl;
        
    //     return (0);
    //}

    {
        std::cout << "\n\033[1;33m----- Creates Array of Animals -----\033[0m" << std::endl;
        const int arraySize = 6; 
        Animal* animals[arraySize];
        std::cout << "Our array size is [" << arraySize << "]" << std::endl;

        std::cout << "\n\033[1;33m----- Half are assigned DOGS -----\033[0m" << std::endl;
        for (int i = 0; i < arraySize / 2; ++i)
        {
            animals[i] = new Dog();
            std::cout << std::endl;
        }
        std::cout << "\n\033[1;33m----- Other half are assigned CATS -----\033[0m" << std::endl;
        for (int i = arraySize / 2; i < arraySize; ++i)
        {
            animals[i] = new Cat();
            std::cout << std::endl;
        }

        std::cout << "\n\033[1;33m----- New cat/dog temp use copy assignment-----\033[0m" << std::endl;
        // tries copy assignment, deep copy issues and destructor of pointer brain
        Dog tmpDog = *(Dog*)animals[1]; //C-style cast 
        std::cout << std::endl;
        Cat tmpCat = *(Cat*)animals[5];
        std::cout << std::endl;

        std::cout << "\n\033[1;33m----- DESTROY array -----\033[0m" << std::endl;
        for (int i = 0; i < arraySize; ++i)
        {
            delete animals[i];
            std::cout << std::endl;
        }
        std::cout << "\n\033[1;33m----- DESTROY temps -----\033[0m" << std::endl;
        return (0);
    }


    // {
    //     Dog basic;
    //     Dog tmp = basic;
    // }
}