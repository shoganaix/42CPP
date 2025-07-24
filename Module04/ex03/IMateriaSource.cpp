/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:11:05 by msoriano          #+#    #+#             */
/*   Updated: 2025/07/24 19:51:07 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
    std::cout << "IMateriaSource Empty Constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &iMateriaSource)
{
    std::cout << "IMateriaSource Copy Constructor called" << std::endl;
    *this = iMateriaSource;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& iMateriaSource)
{
    //return *this;
}
IMateriaSource::~IMateriaSource() 
{
    std::cout << "IMateriaSource Destructor called" << std::endl;
}

/**
 * Copies the Materia passed as a parameter and stores it in memory so it can be cloned
 * later. Like the Character, the MateriaSource can know at most 4 Materias. They
 * are not necessarily unique.
 */
void IMateriaSource::learnMateria(AMateria*)
{
    //
}
/**
 * Returns a new Materia. The latter is a copy of the Materia previously learned by
 * the MateriaSource whose type equals the one passed as parameter. Returns 0 if
 * the type is unknown.
 */
AMateria* IMateriaSource::createMateria(std::string const & type)
{
    //
}