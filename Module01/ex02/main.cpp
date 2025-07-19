/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:46:14 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/19 18:20:47 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Mem address of str variable    : " << &str << std::endl;
    std::cout << "Mem address held by pointer    : " << stringPTR << std::endl;
    std::cout << "Mem address held by ref        : " << &stringREF << std::endl;

    std::cout << "Value of the string variable.  : " <<  str << std::endl;
    std::cout << "Value pointed to by pointer    : " <<  *stringPTR << std::endl;
    std::cout << "Value pointed to by ref        : " <<  stringREF << std::endl;
}