/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:06:57 by msoriano          #+#    #+#             */
/*   Updated: 2025/10/17 18:04:11 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#define RED "\033[1;31m"
#define RESET "\033[0m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"



class ICharacter;

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
        virtual void use(ICharacter& target) = 0;
};

#endif