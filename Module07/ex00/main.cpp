/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:00:59 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:27:20 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

/**
 *  Subject main
 */
// int main( void )
// {
//     int a = 2;
//     int b = 3;
//     ::swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
//     std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     ::swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
//     std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
//     return (0);
// }


/**
 *  Evaluation main
 */
// #include "Awesome.hpp"

// int main() 
// {
//     Awesome a(2), b(4);

//     std::cout << "Initial values: a = " << a << ", b = " << b << std::endl;

//     ::swap(a, b);
//     std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

//     std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
//     std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

//     return (0);
// }



/**
 * My main
 */
int main()
{
    int a = 10;
    int b = 20;

    std::cout << "\n----------------------------INT------------------------------" << std::endl;

    std::cout << "\033[30m\nInital values (int): \033[0m" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "\033[34m \nCalling swap(a, b)... \033[0m" << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "\033[34m\nCalling min(a, b)... \033[0m" << std::endl;
    std::cout << ::min(a, b) << std::endl;
    std::cout << "\033[34m\nCalling max(a, b)... \033[0m" << std::endl;
    std::cout << ::max(a, b) << std::endl;


    std::cout << "\n--------------------------STRING----------------------------" << std::endl;


    std::string x = "hello!";
    std::string y = "byeee";

    std::cout << "\033[30m\nInital values (string):  \033[0m" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;

    std::cout << "\033[34m \nCalling swap(x, y)...  \033[0m" << std::endl;
    swap(x, y);
    std::cout << "x = " << x << ", y = " << y << std::endl;


    std::cout << "\033[34m\nCalling min(x, y)... \033[0m" << std::endl;
    std::cout << ::min(x, y) << std::endl;
    std::cout << "\033[34m\nCalling max(x, y)... \033[0m" << std::endl;
    std::cout << ::max(x, y) << std::endl;
    std::cout << std::endl;

    return (0);
}
