/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:44:40 by usuario           #+#    #+#             */
/*   Updated: 2025/07/23 17:30:42 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
        Brain *brain;
    public:
        Dog(void);
        Dog(Dog const &dog);
        Dog& operator=(const Dog& dog);
        ~Dog(void);

        void makeSound() const;
};

#endif