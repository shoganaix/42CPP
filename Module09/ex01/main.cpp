/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:27:42 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:26:47 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) 
    {
        std::cerr << "\033[31m[Error]:\033[0m Wrong number of arguments: ./RPN <operation>" << std::endl;        
        return (1);
    }

    try 
    {
        RPN rpn(argv[1]);

    } catch (const std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }

    return (0);
}