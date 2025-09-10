/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:16:34 by msoriano          #+#    #+#             */
/*   Updated: 2025/09/10 19:47:21 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(Ice const &ice);
        Ice& operator=(const Ice& ice);
        ~Ice(void);

        virtual Ice* clone() const;
        void use(ICharacter& target);

};

#endif