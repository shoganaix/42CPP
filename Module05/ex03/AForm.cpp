/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:20 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:29:06 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm::AForm(): name(), is_signed(false), sign_grade(150), exec_grade(150)
{
    std::cout << "AForm Constructor called" << std::endl;
    std::cout << "\033[33mUndefined form \033[0m created" << std::endl;
}

AForm::AForm(std::string const name, bool i_signed, int const s_grade, int const e_grade): name(name), is_signed(i_signed), sign_grade(s_grade), exec_grade(e_grade)
{
    if (this->exec_grade > 150 || this->sign_grade > 150)
        throw formgradeTooHighException();
    if (this->exec_grade < 1 || this->sign_grade < 1)
        throw formgradeTooLowException();
    std::cout << "AForm Constructor called" << std::endl;
}

AForm::AForm(const AForm &aform): name(aform.getName()), is_signed(aform.getIsSigned()), sign_grade(aform.getSigngrade()), exec_grade(aform.getExecgrade())
{
    std::cout << "AForm Copy Constructor called" << std::endl;
    *this = aform;
}

AForm& AForm::operator=(const AForm &aform)
{
    this->is_signed = aform.is_signed;
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm Destructor called" << std::endl;
    std::cout << "\033[33m" << this->name << "\033[0m is now destroyed." << std::endl;
}

const std::string AForm::getName() const
{
    return (name);
}

int AForm::getExecgrade() const
{
    return (exec_grade);
}
bool AForm::getIsSigned() const
{
    return (is_signed);
}
int AForm::getSigngrade() const
{
    return (sign_grade);
}

void AForm::setIsSigned(bool signed_bool)
{
    this->is_signed = signed_bool;
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
    if (this->is_signed == false && bureaucrat.getGrade() <= this->getSigngrade())
    {
        is_signed = true;
        std::cout << "Bureaucrat \033[33m" << bureaucrat.getName() <<"\033[0m signed " << "\033[33m" << this->name << "\033[0m" << std::endl;
    }
    else if(this->is_signed == true)
        std::cout << "\033[33m" << this->name << "\033[0m is already signed" << std::endl;
    else
    {
        std::cout << "Bureaucrat \033[33m" << bureaucrat.getName() <<"\033[1;31m couldn't\033[0m sign " << "\033[33m" << this->name << "\033[0m because \033[33mtheir grade is too low\033[0m" << std::endl;
        throw Bureaucrat::gradeTooLowException();
    }
}

void AForm::beExecuted(Bureaucrat const &bureaucrat)
{
    if (this->is_signed == true && bureaucrat.getGrade() <= this->getExecgrade())
    {
        this->execute(bureaucrat);
        std::cout << "Bureaucrat \033[33m" << bureaucrat.getName() <<"\033[0m executed " << "\033[33m" << this->name << "\033[0m" << std::endl;
    }
    else if(this->is_signed == false)
    {
        std::cout << "\033[33m" << this->name << "\033[0m is not signed" << std::endl;
        throw formNotSignedException();
    }
    else
    {
        std::cout << "Bureaucrat \033[33m" << bureaucrat.getName() <<"\033[1;31m couldn't\033[0m execute " << "\033[33m" << this->name << "\033[0m because \033[33mtheir grade is too low\033[0m" << std::endl;
        throw Bureaucrat::gradeTooLowException();
    }
}

AForm *AForm::makeForm(std::string const &name, std::string const &target)
{
    AForm* new_form = NULL;

    new_form = ShrubberyCreationForm::makeForm(new_form, name, target);
    new_form = RobotomyRequestForm::makeForm(new_form, name, target);
    new_form = PresidentialPardonForm::makeForm(new_form, name, target);

    return new_form;
}

char const *AForm::formgradeTooHighException::what() const throw()
{
    return ("\033[31m[Form] Grade too high! Grade cannot be above 1.\033[0m");
}

char const *AForm::formgradeTooLowException::what() const throw()
{
    return ("\033[31m[Form] Grade too low! Grade cannot be below 150.\033[0m");
}

char const *AForm::formNotSignedException::what() const throw()
{
    return ("\033[31m[Form] Cannot execute because the form is not signed!\033[0m");
}

char const *AForm::formInvalidException::what() const throw()
{
    return ("\033[31m[Form] Form type doesn't exist!\033[0m");
}

std::ostream& operator <<(std::ostream &str, const AForm &aform) 
{
    return (str << "\033[35m" << aform.getName() << " form, is_signed: " << aform.getIsSigned() << ", sign grade: " << 
        aform.getSigngrade() << ", execution grade: " << aform.getExecgrade() << ".\033[0m" << std::endl);
}