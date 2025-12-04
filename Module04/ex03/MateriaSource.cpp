/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:11:05 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:30:27 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): materias()
{
    std::cout << GREEN << "MateriaSource Constructor called" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource) :IMateriaSource(materiaSource), materias()
{
    std::cout << GREEN << "MateriaSource Copy Constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (materiaSource.materias[i])
			this->materias[i] = materiaSource.materias[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource)
{
    std::cout << YELLOW << "MateriaSource Operator called" << RESET << std::endl;
    (void)materiaSource;
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout << RED << "MateriaSource Destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (!materia) 
    {
        std::cout << "Cannot learn invalid materia" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++) 
    {
        if (materias[i] == NULL) 
        {
            materias[i] = materia;
            std::cout << "Materia " << materias[i]->getType() << " learned at index " << i << std::endl;
            return ;
        }
        if (materias[i] == materia) 
        {
            std::cout << "Materia already learned" << std::endl;
            return ;
        }
    }
    std::cout << "Cannot learn materia, inventory already full!" << std::endl;
    delete (materia);
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
    for (int i = 0; i < 4; i++) 
    {
        if (materias[i] && materias[i]->getType() == type)
            return (materias[i]->clone());
    }
    std::cout << "Cannot create materia, " << type << " is invalid!" << std::endl;
        return NULL;
}
