/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:00:59 by msoriano          #+#    #+#             */
/*   Updated: 2025/11/30 19:00:48 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

/**
 *  Evaluation main
 */
// #include "Awesome.hpp"

// int main() 
// {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? //NOT ALLOWED IN C++
//     Awesome tab2[5];

//     iter<int>(tab, 5, print<int>);
//     iter<Awesome>(tab2, 5, print<Awesome>);
    
//     return (0);
// }

/**
 *  My main
 */
void printInt(int x) 
{
    std::cout << x << std::endl;
}

void printDouble(double x) 
{
    std::cout << x << std::endl;
}

void printString(const std::string& s)
{
    std::cout << s << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    double doubles[] = {1.2, 2.3, 3.4, 4.5, 5.6};
    std::string words[] = {"hello", "world", ", ", "today", "sucks"};

    std::cout << "\033[30m\nPrinting ints... \033[0m" << std::endl;
    iter(numbers, 5, printInt);

    std::cout << "\033[30m\nPrinting doubles... \033[0m" << std::endl;
    iter(doubles, 5, printDouble);

    std::cout << "\033[30m\nPrinting strings... \033[0m" << std::endl;
    iter(words, 5, printString);
    std::cout << std::endl;

    return (0);
}

