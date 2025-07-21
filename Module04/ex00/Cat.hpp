/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:44:28 by usuario           #+#    #+#             */
/*   Updated: 2025/07/22 00:45:37 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.h"

class Cat : public Animal
{
        std::string type;

    public:
        Cat(void);
        Cat(Animal const &cat);
        Cat& operator=(const Cat& cat);
        ~Cat(void);

		void    makeSound();
};

#endif