/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:11:21 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 15:41:18 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
        std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain const &brain);
        Brain& operator=(const Brain& brain);
        ~Brain(void);
};

#endif