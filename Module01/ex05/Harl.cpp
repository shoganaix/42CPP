/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:41:23 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:32:19 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

void Harl::complain(std::string level)
{
    void	        (Harl::*funcPtr)(void) = NULL;
	void	        (Harl::*array[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string     arrayLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
    {
		if (arrayLevel[i] == level)
        {
            funcPtr = array[i];
            break;
        }
	}
	if (!funcPtr) 
		std::cout << "\033[1;31m Error! \033[0m Invalid Harl's complain level!" << std::endl; 
    else
	    (this->*funcPtr)();
}

/*
*
*       if (level == "DEBUG")
*           funcPtr = &Harl::debug;
*       else if (level == "INFO")
*           funcPtr = &Harl::info;
*       else if (level == "WARNING")
*            funcPtr = &Harl::warning;
*       else if (level == "ERROR")
*           funcPtr = &Harl::error;
*
*/
