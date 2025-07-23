/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:09:03 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/23 17:37:53 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // {
    //     const Animal* j = new Dog();
    //     std::cout << std::endl;
    //     const Animal* i = new Cat();
    //     std::cout << std::endl;
        
    //     delete j;
    //     std::cout << std::endl;
    //     delete i;
    //     std::cout << std::endl;
        
    //     return (0);
    // }

    {
        const int arraySize = 6; 
        Animal* animals[arraySize];

        for (int i = 0; i < arraySize / 2; ++i)
        {
            animals[i] = new Dog();
            std::cout << std::endl;
        }

        for (int i = arraySize / 2; i < arraySize; ++i)
        {
            animals[i] = new Cat();
            std::cout << std::endl;
        }

        for (int i = 0; i < arraySize; ++i)
        {
            delete animals[i];
            std::cout << std::endl;
        }

        return (0);
    }

}