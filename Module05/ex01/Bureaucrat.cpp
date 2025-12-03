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
        throw gradeTooHighException();
    else if (grade > 150)
        throw gradeTooLowException();
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

//Handle exceptions from here! 
void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw gradeTooHighException();
    else if (grade > 150)
        throw gradeTooLowException();
    this->grade = grade;
}

void Bureaucrat::increment()
{
    if (this->grade <= 1)
        throw gradeTooLowException();
    this->grade--;

}
void Bureaucrat::decrement()
{
    if (this->grade >= 150)
        throw gradeTooHighException();
    this->grade++;
}

void Bureaucrat::signForm(Form &form)
{
    form.beSigned(*this);
}

char const	*Bureaucrat::gradeTooHighException::what() const throw()
{
    return ("\033[31m[Bureaucrat] Grade too high!\033[0m");
}

char const	*Bureaucrat::gradeTooLowException::what() const throw()
{
    return ("\033[31m[Bureaucrat] Grade too low!\033[0m");
}

std::ostream& operator <<(std::ostream &str, const Bureaucrat &bureaucrat) 
{
    return (str << "\033[35m" << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\033[0m" << std::endl);
}