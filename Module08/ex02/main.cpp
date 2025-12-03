/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:32:51 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 00:53:21 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/**
 *  Subject main
 */
// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);

//     std::cout << mstack.top() << std::endl;
//     mstack.pop();

//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);

//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();

//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
    
//     std::stack<int> s(mstack);

//     return (0);
// }

/**
 *  My main
 */
#include <vector>

int main()
{
    std::cout << "----------------------------MUTANT STACK FIRST TRY------------------------------" << std::endl;
    try
    {
        MutantStack<int> mstack;
        mstack.push(17);
        mstack.push(5);
        mstack.push(42);
        mstack.push(40);

        std::cout << "\033[30mStack filled with 17, 5, 42, 40\033[0m" << std::endl;
        std::cout << "\033[34mTop element: \033[0m" << mstack.top() << std::endl;
        std::cout << "\033[34mSize: \033[0m" << mstack.size() << std::endl;

        // Forward iteration
        std::cout << "\033[34mIterating Stack:\033[0m" << std::endl;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        for (; it != ite; ++it)
            std::cout << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
    }

    std::cout << "\n---------------------------------CONST TEST------------------------------------" << std::endl;
    try
    {
        MutantStack<int> tmpStack;
        tmpStack.push(1);
        tmpStack.push(2);
        tmpStack.push(3);
        const MutantStack<int>& constStack = tmpStack;

        std::cout << "\033[30mConst Stack filled with 1, 2, 3\033[0m" << std::endl;

        std::cout << "\033[34mIterating Const Stack:\033[0m" << std::endl;
        for (MutantStack<int>::const_iterator cit = constStack.begin(); cit != constStack.end(); ++cit)
            std::cout << *cit << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
    }

    std::cout << "\n----------------------USING DIFFERENT UNDERLYING CONTAINER---------------------" << std::endl;
    try
    {
        std::cout << "\n                                  -- LIST -- \n" << std::endl;

        MutantStack<int, std::list<int> > lstStack;
        lstStack.push(10);
        lstStack.push(20);
        lstStack.push(30);

        std::cout << "\033[30mList contains: 10, 20, 30\033[0m" << std::endl;

        std::cout << "\033[34mIterating list-based Stack:\033[0m" << std::endl;
        MutantStack<int, std::list<int> >::iterator it = lstStack.begin();
        MutantStack<int, std::list<int> >::iterator ite = lstStack.end();
        for (; it != ite; ++it)
            std::cout << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
    }

    try
    {
        std::cout << "\n                                 -- VECTOR -- \n" << std::endl;
        MutantStack<int, std::vector<int> > vec;
        vec.push(100);
        vec.push(200);
        vec.push(300);

        std::cout << "\033[30mVector contains: 100, 200, 300\033[0m" << std::endl;

        std::cout << "\033[34mIterating vector-based Stack:\033[0m" << std::endl;
        MutantStack<int, std::vector<int> >::iterator it = vec.begin();
        MutantStack<int, std::vector<int> >::iterator ite = vec.end();
        for (; it != ite; ++it)
            std::cout << *it << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
    }

    std::cout << "\n--------------------------------------ERROR------------------------------------" << std::endl;
    try
    {
        std::vector<int> v;
        std::cout << v.at(0) << std::endl;  // this will throw std::out_of_range
    }
    catch (std::exception &e)
    {
        std::cout << "\n\033[31mError: \033[0m" << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    
    return (0);
}
