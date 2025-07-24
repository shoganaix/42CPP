/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:11:05 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 19:48:24 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "\033[33m" << type << "\033[0m AMateria Constructor() called" << std::endl;
}

AMateria::AMateria(const AMateria& aMateria)
{
    std::cout << "AMateria Copy Constructor called" << std::endl;
    *this = aMateria;
}

AMateria& AMateria::operator=(const AMateria& aMateria)
{
    //
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
}
std::string const & AMateria::getType() const
{
    //
}

AMateria* AMateria::clone() const
{
    //
}

void AMateria::use(ICharacter& target)
{
    //
}
