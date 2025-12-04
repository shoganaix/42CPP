/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:33:08 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:27:06 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/**
 *  Subject main
 */
// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);

//     std::cout << sp.shortestSpan() << std::endl; // 5 - 3 = 2
//     std::cout << sp.longestSpan() << std::endl; // 17 - 3 = 14

//     return (0);
// }

/**
 *  My main
 */
#include <vector>
#include <list>
#include <deque>

int main()
{
    Span sp(5);
    sp.addNumber(3);
    sp.addNumber(7);
    sp.addNumber(42);

    std::cout << "\n----------------------------SPAN FIRST TRY------------------------------" << std::endl;
    try 
    {
        std::cout << "\033[30m\nSpan filled with 3, 7, 42\033[0m" << std::endl;

        std::cout << "\033[34mShortest span: \033[0m" << sp.shortestSpan() << std::endl;
        std::cout << "\033[34mLongest span:  \033[0m" << sp.longestSpan()  << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
    }


    std::cout << "\n----------------------------SPAN SECOND TRY (NO SPAN POSSIBLE)------------------------------" << std::endl;
    try {
        Span sp2(1);
        sp2.addNumber(10);
        
        std::cout << "\033[30m\nSpan filled with 10\033[0m" << std::endl;

        std::cout << "\033[34mShortest span: \033[0m" << sp2.shortestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
    }

    std::cout << "\n----------------------------SPAN THIRD TRY (SPAN FULL)------------------------------" << std::endl;
    try {
        std::cout << std::endl;
        Span sp2(1);
        sp2.addNumber(10);
        sp2.addNumber(20);
        
        std::cout << "\033[30m\nSpan filled with 10\033[0m" << std::endl;

        std::cout << "\033[34mShortest span: \033[0m" << sp2.shortestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
    }



    std::cout << "\n----------------------------ADDING MULTIPLE FROM VECTOR------------------------------" << std::endl;

    try 
    {
        Span sp3(10);
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(100);
        vec.push_back(200);
        vec.push_back(300);
        vec.push_back(500);

        std::cout << "\033[30m\nVector contains: 1, 100, 200, 300, 500\033[0m" << std::endl;

        sp3.addMultipleNumbers(vec.begin(), vec.end());

        std::cout << "\033[34mShortest span: \033[0m" << sp3.shortestSpan() << std::endl;
        std::cout << "\033[34mLongest span:  \033[0m" << sp3.longestSpan()  << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
    }


    std::cout << "\n----------------------------ADDING MULTIPLE FROM LIST------------------------------" << std::endl;

    try 
    {
        Span sp4(10);
        std::list<int> lst;
        lst.push_back(5);
        lst.push_back(15);
        lst.push_back(25);
        lst.push_back(50);
        lst.push_back(100);

        std::cout << "\033[30m\nList contains: 5, 15, 25, 50, 100\033[0m" << std::endl;

        sp4.addMultipleNumbers(lst.begin(), lst.end());

        std::cout << "\033[34mShortest span: \033[0m" << sp4.shortestSpan() << std::endl;
        std::cout << "\033[34mLongest span:  \033[0m" << sp4.longestSpan()  << std::endl;

    }
    catch (std::exception& e) {
        std::cout << "\033[31mError: \033[0m" << e.what() << std::endl;
    }

    return (0);
}