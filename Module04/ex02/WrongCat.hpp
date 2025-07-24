/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:44:28 by usuario           #+#    #+#             */
/*   Updated: 2025/07/23 16:31:30 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Animal.hpp"

class WrongCat : public Animal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat const &wrongcat);
        WrongCat& operator=(const WrongCat& wrongcat);
        ~WrongCat(void);

        void makeSound() const;
};

#endif