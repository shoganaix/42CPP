/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:24 by usuario           #+#    #+#             */
/*   Updated: 2025/07/24 15:45:40 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal const &animal);
        Animal& operator=(const Animal& animal);
        virtual ~Animal(void);

        void setType(std::string type);
        const std::string getType() const;

        virtual void makeSound() const = 0;
            /*
            * El = 0 indica que es una función virtual pura, sin implementación.
            * Esto hace que Animal sea una clase abstracta y no se pueda instanciar
            */
};

#endif