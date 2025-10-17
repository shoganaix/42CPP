/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:11:05 by msoriano          #+#    #+#             */
/*   Updated: 2025/10/17 18:04:53 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << GREEN << "AMateria Constructor called" << RESET<< std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << GREEN << type << "AMateria Constructor() called" << RESET << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria& aMateria)
{
    std::cout << GREEN << "AMateria Copy Constructor called" << RESET << std::endl;
    *this = aMateria;
}

AMateria& AMateria::operator=(const AMateria& aMateria)
{
    std::cout << YELLOW << "AMateria Operator called" << RESET << std::endl;
    this->type = aMateria.type;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << RED << "AMateria Destructor called" << RESET << std::endl;
}
std::string const & AMateria::getType() const
{
    return(this->type);
}
