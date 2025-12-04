/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:20 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 12:29:34 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Aform::Aform(): name(), is_signed(false), sign_grade(150), exec_grade(150)
{
    std::cout << "Aform Constructor called" << std::endl;
    std::cout << "\033[33mUndefined form \033[0m created" << std::endl;
}

Aform::Aform(std::string const name, bool i_signed, int const s_grade, int const e_grade): name(name), is_signed(i_signed), sign_grade(s_grade), exec_grade(e_grade)
{
    if (this->exec_grade > 150 || this->sign_grade > 150)
        throw formgradeTooHighException();
    if (this->exec_grade < 1 || this->sign_grade < 1)
        throw formgradeTooLowException();
    std::cout << "Aform Constructor called" << std::endl;
}

Aform::Aform(const Aform &aform): name(aform.getName()), is_signed(aform.getIsSigned()), sign_grade(aform.getSigngrade()), exec_grade(aform.getExecgrade())
{
    std::cout << "Aform Copy Constructor called" << std::endl;
    *this = aform;
}

Aform& Aform::operator=(const Aform &aform)
{
    this->is_signed = aform.is_signed;
    return *this;
}

Aform::~Aform()
{
    std::cout << "Aform Destructor called" << std::endl;
    std::cout << "\033[33m" << this->name << "\033[0m is now destroyed." << std::endl;
}

const std::string Aform::getName() const
{
    return (name);
}

int Aform::getExecgrade() const
{
    return (exec_grade);
}
bool Aform::getIsSigned() const
{
    return (is_signed);
}
int Aform::getSigngrade() const
{
    return (sign_grade);
}

void Aform::setIsSigned(bool signed_bool)
{
    this->is_signed = signed_bool;
}

void Aform::beSigned(Bureaucrat const &bureaucrat)
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

void Aform::beExecuted(Bureaucrat const &bureaucrat)
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

char const *Aform::formgradeTooHighException::what() const throw()
{
    return ("\033[31m[Form] Grade too high! Grade cannot be above 1.\033[0m");
}

char const *Aform::formgradeTooLowException::what() const throw()
{
    return ("\033[31m[Form] Grade too low! Grade cannot be below 150.\033[0m");
}

char const *Aform::formNotSignedException::what() const throw()
{
    return ("\033[31m[Form] Cannot execute because the form is not signed!\033[0m");
}

std::ostream& operator <<(std::ostream &str, const Aform &aform) 
{
    return (str << "\033[35m" << aform.getName() << " form, is_signed: " << aform.getIsSigned() << ", sign grade: " << 
        aform.getSigngrade() << ", execution grade: " << aform.getExecgrade() << ".\033[0m" << std::endl);
}