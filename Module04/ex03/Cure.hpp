/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:16:34 by msoriano          #+#    #+#             */
/*   Updated: 2025/09/10 19:47:24 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(Cure const &cure);
        Cure& operator=(const Cure& cure);
        ~Cure(void);

        virtual AMateria* clone() const;
        void use(ICharacter& target);

};

#endif