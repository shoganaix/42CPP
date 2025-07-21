/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:44:40 by usuario           #+#    #+#             */
/*   Updated: 2025/07/22 00:45:34 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.h"

class Dog : public Animal
{
        std::string type;

    public:
        Dog(void);
        Dog(Animal const &dog);
        Dog& operator=(const Dog& dog);
        ~Dog(void);

		void    makeSound();
};

#endif