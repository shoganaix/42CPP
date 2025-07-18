/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:46:14 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/18 18:11:13 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str; //lo ise mal

    std::cout << "Mem address of str variable    : " << &str << std::endl;
    std::cout << "Mem address held by pointer    : " << stringPTR << std::endl;
    std::cout << "Mem address held by ref        : " << &stringREF << std::endl;

    std::cout << "Value of the string variable.  : " <<  str << std::endl;
    std::cout << "Value pointed to by pointer    : " <<  *stringPTR << std::endl; //puse &stringptr en vez de *stringptr
    std::cout << "Value pointed to by ref        : " <<  stringREF << std::endl;
}