/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:20 by usuario           #+#    #+#             */
/*   Updated: 2025/07/24 15:29:08 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Constructor called" << std::endl;
}

Intern::Intern(const Intern &intern)
{
    std::cout << "Intern Copy Constructor called" << std::endl;
    *this = intern;
}

Intern& Intern::operator=(const Intern &intern)
{
    if (this == &intern)
        return (*this);
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}

AForm *Intern::makeForm(std::string const &name, std::string const &target)
{
    AForm	*new_form = AForm::makeForm(name, target);

	if (!new_form)
    {
		std::cout << "Intern \033[1;31mcouldn't\033[0m create form: \033[33m" << name << "\033[0m" << std::endl;
		throw (AForm::FormInvalidException());
    }
	else
		std::cout << "Intern creates form: \033[33m" << new_form->getName() << "\033[0m" << std::endl;
	return (new_form);
}
