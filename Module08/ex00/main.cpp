/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:57:12 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 00:53:46 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(3);
    vec.push_back(7);
    vec.push_back(42);

    std::cout << "\n----------------------------VECTOR CONTAINER FIRST TRY------------------------------" << std::endl;
    try 
    {
        std::cout << "\033[30m\nInital values on container [vector]: \033[0m" << std::endl;
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        int found = easyfind(vec, 42); //Calling easyfind() to find 42
        std::cout << "\033[34m\nFound: \033[0m" << found << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "\033[31m\nError: \033[0m" << e.what() << std::endl;
    }


    std::cout << "\n----------------------------VECTOR CONTAINER SECOND TRY------------------------------" << std::endl;
    try {
        int found = easyfind(vec, 999);
        std::cout << "\033[34mFound: \033[0m" << found << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "\033[31m\nError: \033[0m" << e.what() << std::endl;
    }


    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    std::cout << "\n----------------------------LIST CONTAINER------------------------------" << std::endl;
    try 
    {
        std::cout << "\033[30m\nInital values on container [list]: \033[0m" << std::endl;
        for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        {
            std::cout << *it << " ";
        }

        int found = easyfind(lst, 2);
        std::cout << "\033[34m\nFound: \033[0m" << found << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "\033[31m\nError: \033[0m" << e.what() << std::endl;
    }

    return (0);
}