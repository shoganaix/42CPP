/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:45:08 by msoriano          #+#    #+#             */
/*   Updated: 2025/10/17 16:54:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    std::string name;
    AMateria* slots[4];

    public:
        Character(void);
        Character(std::string const &name);
        Character(Character const &character);
        Character& operator=(const Character& character);
        ~Character();
        
        std::string const &getName() const;
        void setName(std::string &name);
        
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif