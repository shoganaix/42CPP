/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:10:11 by usuario           #+#    #+#             */
/*   Updated: 2025/11/19 14:42:05 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer Constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &serializer)
{
    std::cout << "Serializer Copy Constructor called" << std::endl;
    *this = serializer;
}

Serializer& Serializer::operator=(const Serializer &serializer)
{
    if (this == &serializer)
        return (*this);
    return (*this);
}

Serializer::~Serializer()
{
    std::cout << "Serializer Destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

// reinterpret_cast:
// ----------------------------------------------
// This cast reinterprets the raw bits of a value as another type without changing the underlying data
// It does no safety checks!
//  - Safe here because we convert: pointer → integer → same pointer
//    without modifying the bits in between


//static_cast      -----> tries to convert the value safely 
// (It does NOT know how to safely convert a memory address into a number)

//reinterpret_cast -----> reinterprets the bits with no safety 
// (Perfect for raw, low-level bit reinterpretations)
//    Meaning: Take the raw bytes and pretend they belong to another type, without touching them
