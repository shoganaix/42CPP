/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:44:28 by usuario           #+#    #+#             */
/*   Updated: 2025/07/23 17:13:20 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
        Brain *brain;
    public:
        Cat(void);
        Cat(Cat const &cat);
        Cat& operator=(const Cat& cat);
        ~Cat(void);

        void makeSound() const;
};

#endif