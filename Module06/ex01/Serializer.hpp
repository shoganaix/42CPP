/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:00:58 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:28:24 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
#define Serializer_HPP

#include "Data.hpp"
#include <iostream>

#include <stdint.h> // uintptr_t & c++98 standard


class Serializer
{
    private:
        Serializer(void); 
        Serializer(Serializer const &serializer);
        Serializer& operator=(const Serializer &serializer);
        ~Serializer(void);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif