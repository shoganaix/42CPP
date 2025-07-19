/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:41:29 by usuario           #+#    #+#             */
/*   Updated: 2025/07/19 18:17:47 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public:
        Harl(void);
        ~Harl(void);

        void complain(std::string level);
};

#endif