/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:11:59 by msoriano          #+#    #+#             */
/*   Updated: 2025/05/20 18:00:37 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
	char c;
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; j < (int)strlen(argv[i]); j += 1)
			{
					c = std::toupper((argv[i][j]));
					std::cout << c;
			}

		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}