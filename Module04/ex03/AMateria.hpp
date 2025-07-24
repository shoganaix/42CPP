/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:06:57 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 18:23:55 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
    protected:
    
        std::string type;
    
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(AMateria const &aMaterial);
        AMateria& operator=(const AMateria& aMaterial);
        virtual ~AMateria(void);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif