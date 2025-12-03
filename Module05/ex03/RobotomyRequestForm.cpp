/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:19:04 by root              #+#    #+#             */
/*   Updated: 2025/12/04 00:55:17 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm::AForm("RobotomyRequestForm", false, 72, 45), target()
{
    std::cout << "RobotomyRequestForm Constructor called" << std::endl;
    std::cout << "\033[33mUndefined Robotomy form \033[0m created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm::AForm("RobotomyRequestForm", false, 72, 45), target(target)
{
    //
    std::cout << "RobotomyRequestForm Constructor() called" << std::endl;
    std::cout << "\033[33m" << getName() << " \033[32m" << getTarget() << "\033[0m created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm::AForm(copy), target(copy.target)
{
    std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    AForm::operator=(copy);
    this->target = copy.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
    std::cout << "\033[33m" << getName() << " \033[32m" <<  this->target << "\033[0m is now destroyed." << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return (target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw formNotSignedException();
    if (executor.getGrade() > this->getExecgrade())
        throw Bureaucrat::gradeTooLowException();
    (srand(time(0)), 0);
    if(rand() % 2 == 0) 
    {
        std::cout << "\033[1;33mBZZZZZZZZZ... VRRRRRRRRR... DRRRRRRRRRR!!! 🔩🔧\033[0m" << std::endl;
        std::cout << "Bureaucrat \033[33m" << executor.getName() << "\033[32m successfully \033[0mexecuted a \033[33m" << this->target << " robotomy\033[0m form" << std::endl;
    }
    else
	    std::cout << "Bureaucrat \033[33m" << executor.getName() << "\033[1;31m failed\033[0m to execute "<< this->target << " robotomy form" << std::endl;        
}

AForm	*RobotomyRequestForm::makeForm(AForm *form, std::string const &name, std::string const &target)
{
	if (form == NULL && name == "Robotomy")
		return (new RobotomyRequestForm(target));
	return (form);
}

std::ostream& operator <<(std::ostream &str, const RobotomyRequestForm &copy) 
{
    return (str << "\033[35m" << copy.getTarget() << "robotomy form\033[0m form: \033[35msign grade 72, exec grade 45.\033[0m" << std::endl);
}
