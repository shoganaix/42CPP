/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:15:31 by root              #+#    #+#             */
/*   Updated: 2025/11/19 14:54:23 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//int main(int argc, char **argv)
//{
//  if (argc != 2)
//    return(std::cerr << "\033[1;31mThis executable needs exactly 1 argument!\033[0m" << std::endl, 1);
//  ScalarConverter::convert(argv[1]);
//  return (0);
//}

int main(int argc, char **argv)
{
    if (argc != 2)
        return(std::cerr << "\033[1;31mThis executable needs exactly 1 argument!\033[0m" << std::endl, 1);

    std::cout << "\033[1;36m==============================\033[0m" << std::endl;
    std::cout << "\033[1;33m       SCALAR CONVERSION      \033[0m" << std::endl;
    std::cout << "\033[1;36m==============================\033[0m" << std::endl;

    std::cout << "\033[1;32mInput argument:\033[0m " << argv[1] << std::endl << std::endl;

    std::cout << "\033[1;33m--- Conversion Results ---\033[0m" << std::endl;
    ScalarConverter::convert(argv[1]);
    std::cout << "\033[1;36m--------------------------\033[0m" << std::endl;

    std::cout << "\033[1;32mConversion completed successfully!\033[0m" << std::endl;

    return (0);
}
