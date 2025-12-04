/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:43:30 by msoriano          #+#    #+#             */
/*   Updated: 2025/12/04 12:30:28 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    AMateria	*materias[4];
    
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &MateriaSource);
        MateriaSource& operator=(const MateriaSource& MateriaSource);
        ~MateriaSource();

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif