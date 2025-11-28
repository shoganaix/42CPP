/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:58:45 by msoriano          #+#    #+#             */
/*   Updated: 2025/11/28 19:02:31 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try 
    {
        std::cout <<"\033[30m\n=== Testing int array ===\033[0m\n" << std::endl;
        Array<int> arrInt(5);

        for (unsigned int i = 0; i < arrInt.size(); i++)
            arrInt[i] = i * 10;
         for (unsigned int i = 0; i < arrInt.size(); i++)
            std::cout << "arrInt[" << i << "] = " << arrInt[i] << std::endl;
        //0, 10, 20, 30, 40
            
        // Copy constructor
        std::cout <<"\033[30m\n=== Calling Copy constructor ===\033[0m\n" << std::endl;
        Array<int> copyInt(arrInt);
        copyInt[0] = 999;
        std::cout << "\033[34m    Modifying copy...\033[0m" << std::endl;
        std::cout << "     ->arrInt[0] = " << arrInt[0] << ", copyInt[0] = " << copyInt[0] << std::endl;

        // Assignment operator
        std::cout <<"\033[30m\n=== Calling Assignment operator ===\033[0m\n" << std::endl;
        Array<int> assignInt;
        assignInt = arrInt;
        assignInt[1] = 888;
        std::cout << "\033[34m    Modifying again...\033[0m" << std::endl;
        std::cout << "     ->arrInt[1] = " << arrInt[1] << ", assignInt[1] = " << assignInt[1] << std::endl;

        // Out-of-bounds access
        std::cout <<"\033[30m\n=== Testing index access ===\033[0m\n" << std::endl;
        std::cout << arrInt[10] << std::endl; // should throw

    } 
    catch (Array<int>::IndexOutOfRange &e) 
    {
        std::cout << e.what() << std::endl;
    }

    std::cout <<"\033[30m\n=== Testing double array ===\033[0m\n" << std::endl;
    Array<double> arrDouble(3);
    for (unsigned int i = 0; i < arrDouble.size(); i++)
        arrDouble[i] = i + 0.5;

    for (unsigned int i = 0; i < arrDouble.size(); i++)
        std::cout << "arrDouble[" << i << "] = " << arrDouble[i] << std::endl;

    std::cout <<"\033[30m\n=== Testing string array ===\033[0m\n" << std::endl;
    Array<std::string> arrStr(3);
    arrStr[0] = "Hello";
    arrStr[1] = "World";
    arrStr[2] = "!";

    for (unsigned int i = 0; i < arrStr.size(); i++)
        std::cout << "arrStr[" << i << "] = " << arrStr[i] << std::endl;

    std::cout << std::endl;
    return (0);
}