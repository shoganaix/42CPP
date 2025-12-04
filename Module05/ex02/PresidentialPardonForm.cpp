/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:19:04 by root              #+#    #+#             */
/*   Updated: 2025/12/04 12:29:39 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Aform::Aform("PresidentialPardonForm", false, 25, 5), target()
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
    std::cout << "\033[33mUndefined Presidential pardon form \033[0m created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Aform::Aform("PresidentialPardonForm", false, 25, 5), target(target)
{
    //
    std::cout << "PresidentialPardonForm Constructor() called" << std::endl;
    std::cout << "\033[33m" << getName() << " \033[32m" << getTarget() << "\033[0m created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Aform::Aform(copy), target(copy.target)
{
    std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    Aform::operator=(copy);
    this->target = copy.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
    std::cout << "\033[33m" << getName() << " \033[32m" <<  this->target << "\033[0m is now destroyed." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return (target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw formNotSignedException();
    if (executor.getGrade() > this->getExecgrade())
        throw Bureaucrat::gradeTooLowException();
	    std::cout << "Bureaucrat \033[33m" << executor.getName() << "\033[0m informs that \033[33m" << this->target << " \033[0m has been pardoned by Zaphod Beeblebrox"<< std::endl;        
}

std::ostream& operator <<(std::ostream &str, const PresidentialPardonForm &copy) 
{
    return (str << "\033[35m" << copy.getTarget() << "Presidential Pardon\033[0m form: \033[35msign grade 25, exec grade 5.\033[0m" << std::endl);
}
