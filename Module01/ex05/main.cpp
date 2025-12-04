/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:41:26 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:32:22 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string debug = "DEBUG";
    std::string info = "INFO";
    std::string warning = "WARNING";
    std::string error = "ERROR";

    Harl bot;
    bot.complain(debug);
    bot.complain(info);
    bot.complain(warning);
    bot.complain(error);

    return(0);
}