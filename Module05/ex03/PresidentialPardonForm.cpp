/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:19:04 by root              #+#    #+#             */
/*   Updated: 2025/10/23 17:43:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm::AForm("PresidentialPardonForm", false, 25, 5), target()
{
    std::cout << "PresidentialPardonForm Constructor called" << std::endl;
    std::cout << "\033[33mUndefined Presidential pardon form \033[0m created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm::AForm("PresidentialPardonForm", false, 25, 5), target(target)
{
    //
    std::cout << "PresidentialPardonForm Constructor() called" << std::endl;
    std::cout << "\033[33m" << getName() << " \033[32m" << getTarget() << "\033[0m created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm::AForm(copy), target(copy.target)
{
    std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    AForm::operator=(copy);
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
        throw FormNotSignedException();
    if (executor.getGrade() > this->getExecgrade())
        throw Bureaucrat::GradeTooLowException();
	    std::cout << "Bureaucrat \033[33m" << executor.getName() << "\033[0m informs that \033[33m" << this->target << " \033[0m has been pardoned by Zaphod Beeblebrox"<< std::endl;        
}

AForm	*PresidentialPardonForm::makeForm(AForm *form, std::string const &name, std::string const &target)
{
	if (form == NULL && name == "Presidential")
		return (new PresidentialPardonForm(target));
	return (form);
}

std::ostream& operator <<(std::ostream &str, const PresidentialPardonForm &copy) 
{
    return (str << "\033[35m" << copy.getTarget() << "Presidential Pardon\033[0m form: \033[35msign grade 25, exec grade 5.\033[0m" << std::endl);
}
