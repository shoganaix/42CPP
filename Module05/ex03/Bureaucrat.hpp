/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:24 by usuario           #+#    #+#             */
/*   Updated: 2025/07/24 14:19:27 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    std::string         name;
    int                 grade;

    public:
        Bureaucrat(void); 
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &bureaucrat);
        Bureaucrat& operator=(const Bureaucrat &bureaucrat);
        ~Bureaucrat(void);

        void setName(std::string name);
        void setGrade(int grade);
        const std::string getName() const;
        int getGrade() const;

        void increment();
        void decrement();
        void signForm(AForm &form);
        void executeForm(AForm &form);

        class gradeTooHighException : public std::exception 
        {
            public:
                const char* what() const throw();
        };

        class gradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator <<(std::ostream &str, const Bureaucrat &bureaucrat);

#endif