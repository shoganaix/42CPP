/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:44:40 by usuario           #+#    #+#             */
/*   Updated: 2025/07/24 14:23:58 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public:
        WrongDog(void);
        WrongDog(WrongDog const &wrongdog);
        WrongDog& operator=(const WrongDog& wrongdog);
        ~WrongDog(void);

        void makeSound() const;
};

#endif