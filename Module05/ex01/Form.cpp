/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:20 by usuario           #+#    #+#             */
/*   Updated: 2025/12/03 18:56:06 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name(), is_signed(false), sign_grade(150), exec_grade(150)
{
    std::cout << "Form Constructor called" << std::endl;
    std::cout << "\033[33mUndefined form \033[0m created" << std::endl;
}

Form::Form(std::string const name, bool i_signed, int const s_grade, int const e_grade): name(name), is_signed(i_signed), sign_grade(s_grade), exec_grade(e_grade)
{
    if (this->exec_grade > 150 || this->sign_grade > 150)
        throw gradeTooHighException();
    if (this->exec_grade < 1 || this->sign_grade < 1)
        throw gradeTooLowException();
    std::cout << "Form Constructor called" << std::endl;
    std::cout << "\033[33m" << name << " form\033[0m created" << std::endl;
}

Form::Form(const Form &form): name(form.getName()), is_signed(form.getIsSigned()), sign_grade(form.getSigngrade()), exec_grade(form.getExecgrade())
{
    std::cout << "Form Copy Constructor called" << std::endl;
    *this = form;
}

Form& Form::operator=(const Form &form)
{
    this->is_signed = form.is_signed;
    return *this;
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
    std::cout << "\033[33m" << this->name << "\033[0m is now destroyed." << std::endl;
}

const std::string Form::getName() const
{
    return (name);
}

int Form::getExecgrade() const
{
    return (exec_grade);
}
bool Form::getIsSigned() const
{
    return (is_signed);
}
int Form::getSigngrade() const
{
    return (sign_grade);
}

void Form::setIsSigned(bool signed_bool)
{
    this->is_signed = signed_bool;
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (this->is_signed == false && bureaucrat.getGrade() <= this->getSigngrade())
    {
        is_signed = true;
        std::cout << "Bureaucrat \033[33m" << bureaucrat.getName() <<"\033[0m signed " << "\033[33m" << this->name << "\033[0m form" << std::endl;
    }
    else if(this->is_signed == true)
        std::cout << "\033[33m" << this->name << "\033[0m form is already signed" << std::endl;
    else
    {
        std::cout << "Bureaucrat \033[33m" << bureaucrat.getName() <<"\033[0m couldn't sign " << "\033[33m" << this->name << "\033[0m form because \033[33mtheir grade is too low\033[0m" << std::endl;
        throw Bureaucrat::gradeTooLowException();
    }
}


char const	*Form::gradeTooHighException::what() const throw()
{
    return ("\033[31m[Form] Grade too high!\033[0m");
}

char const	*Form::gradeTooLowException::what() const throw()
{
    return ("\033[31m[Form] Grade too low!\033[0m");
}

std::ostream& operator <<(std::ostream &str, const Form &form) 
{
    return (str << "\033[35m" << form.getName() << " form, is_signed: " << form.getIsSigned() << ", sign grade: " << 
        form.getSigngrade() << ", execution grade: " << form.getExecgrade() << ".\033[0m" << std::endl);
}