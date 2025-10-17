/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:11:05 by msoriano          #+#    #+#             */
/*   Updated: 2025/10/17 18:06:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
    std::cout << GREEN << "IMateriaSource Constructor called" << RESET << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& iMateriaSource)
{
    std::cout << GREEN << "IMateriaSource Copy Constructor called" << RESET << std::endl;
    *this = iMateriaSource;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& iMateriaSource)
{
    std::cout << YELLOW << "MateriaSource Operator called" << RESET << std::endl;
    (void)iMateriaSource;
    return *this;
}

IMateriaSource::~IMateriaSource() 
{
    std::cout << RED << "IMateriaSource destructor called" << RESET << std::endl;
}
