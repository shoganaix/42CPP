/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:15:31 by root              #+#    #+#             */
/*   Updated: 2025/10/23 18:31:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
  if (argc != 2)
    return(std::cout << "This executable needs 1 argument!" << std::endl, 1);
  ScalarConverter::convert(argv[1]);
  return (0);
}