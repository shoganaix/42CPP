/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:20 by usuario           #+#    #+#             */
/*   Updated: 2025/10/17 20:52:25 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name(), grade(150)
{
    std::cout << "Form Constructor called" << std::endl;
    std::cout << "\033[33mUndefined form \033[0m is created" << std::endl;
}

Form::Form(std::string name, int grade) : name(name), grade(grade)
{
//
}

Form::Form(const Form &form)
{
    std::cout << "Form Copy Constructor called" << std::endl;
    *this = form;
}

Form& Form::operator=(const Form &form)
{
    //
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
    std::cout << "\033[33m" << name << "\033[0m is now destroyed." << std::endl;
}

const std::string Form::getName() const
{
    return (name);
}

int Form::getExecgrade() const
{
    return (exec_grade);
}
bool Form::getSigned() const
{
    return (signed);
}
int Form::getSigngrade() const
{
    return (sign_grade);
}

void Form::setName(std::string name)
{
    this->name = name;
}

void Form::setSigned(int grade)
{
//
}
void Form::setExecgrade(int grade)
{
//
}
void Form::setSigngrade(int grade)
{
//
}

void Form::sign()
{
//
}


char const	*Form::GradeTooHighException::what() const throw()
{
    return ("\033[31mGrade too high! Maximum is 150.\033[0m");
}

char const	*Form::GradeTooLowException::what() const throw()
{
    return ("\033[31mGrade too low! Minimum is 1.\033[0m");
}

std::ostream& operator <<(std::ostream &str, const Form &form) 
{
    return (str << "\033[35m" << form.getName() << " form, signed: " << form.getSigned() << ", sign grade: " << 
        form.getSigngrade() << ", execution grade: " << form.getExecgrade() << ".\033[0m" << std::endl);
}