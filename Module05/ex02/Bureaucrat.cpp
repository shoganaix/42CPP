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

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(), grade(150)
{
    std::cout << "Bureaucrat Constructor called" << std::endl;
    std::cout << "\033[33mUndefined bureaucrat \033[0m is born" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    std::cout << "Bureaucrat Constructor() called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
    std::cout << "\033[33m" << name << "\033[0m is born" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
    *this = bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    if (this != &bureaucrat)
    {
        this->name = bureaucrat.name;
        this->grade = bureaucrat.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
    std::cout << "\033[33m" << name << "\033[0m is now dead." << std::endl;
}

const std::string Bureaucrat::getName() const
{
    return name;
}

void Bureaucrat::setName(std::string name)
{
    this->name = name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

void Bureaucrat::increment()
{
    if (this->grade <= 1)
        throw GradeTooLowException();
    this->grade--;

}
void Bureaucrat::decrement()
{
    if (this->grade >= 150)
        throw GradeTooHighException();
    this->grade++;
}

void Bureaucrat::signForm(Aform &form)
{
    form.beSigned(*this);
}

void Bureaucrat::executeForm(Aform &form)
{
    try
    {
        form.execute(*this);
        std::cout << "Bureaucrat \033[33m" << this->name << "\033[0m executed \033[33m" << form.getName() << "\033[0m form" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Bureaucrat \033[33m" << this->name << "\033[0m couldn't execute \033[33m" << form.getName() << "\033[0m form because "  << e.what() << std::endl;
    }
}

char const	*Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("\033[31mGrade too high! Maximum is 150.\033[0m");
}

char const	*Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("\033[31mGrade too low! Minimum is 1.\033[0m");
}

std::ostream& operator <<(std::ostream &str, const Bureaucrat &bureaucrat) 
{
    return (str << "\033[35m" << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\033[0m" << std::endl);
}