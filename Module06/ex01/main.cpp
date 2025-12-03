/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:08:56 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 00:54:21 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main()
{
    Data data;
    data.nb = 42;
    data.str = "Hello world!";

    std::cout << "\033[33m== ORIGINAL DATA == \033[0m" << std::endl;
    std::cout << "Address: " << &data << std::endl;
    std::cout << "Number:  " << data.nb << std::endl;
    std::cout << "Text:    " << data.str << std::endl;

    // Serialize
    std::cout << "\033[33m\n== SERIALIZING == \033[0m" << std::endl;
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized uintptr_t: " << raw << std::endl;

    // Deserialize
    std::cout << "\033[33m\n== DESERIALIZING == \033[0m" << std::endl;
    Data* ptr = Serializer::deserialize(raw);
    std::cout << "Deserialized pointer: " << ptr << std::endl;

    // Verify
    std::cout << "\033[32m\n== CHECKS == \033[0m" << std::endl;
    if (ptr == &data)
        std::cout << "✔ Success! Pointer matches original" << std::endl;
    else
        std::cout << "❌Failure! Pointer does not match" << std::endl;
    if (ptr->nb == data.nb && ptr->str == data.str)
        std::cout << "✔ Data content preserved" << std::endl;
    else
        std::cout << "❌ Data corrupted!" << std::endl;

    return (0);
}
