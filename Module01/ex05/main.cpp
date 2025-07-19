/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:41:26 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 18:17:51 by usuario          ###   ########.fr       */
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