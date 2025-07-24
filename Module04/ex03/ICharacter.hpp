/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:23:07 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 19:44:35 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
    //AMateria slots[4];
    std::string name;

    public:
        ICharacter(void);
        ICharacter(std::string name);
        ICharacter(std::string const &type);
        ICharacter(ICharacter const &iCharacter);
        ICharacter& operator=(const ICharacter& iCharacter);
        virtual ~ICharacter();
        
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif