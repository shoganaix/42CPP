/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:24 by usuario           #+#    #+#             */
/*   Updated: 2025/10/23 17:49:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const   name;
        bool                is_signed;
        int const           sign_grade;
        int  const          exec_grade;

    public:
        AForm(void); 
        AForm(std::string const name, bool is_signed, int const sign_grade, int const exec_grade);
        AForm(AForm const &aform);
        AForm& operator =(const AForm &aform);
        virtual ~AForm(void);

        void setIsSigned(bool is_signed);

        const std::string getName() const;
        bool getIsSigned() const;
        int  getSigngrade() const;
        int  getExecgrade() const;

        void beSigned(Bureaucrat const &bureaucrat);
        void beExecuted(Bureaucrat const &bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;
        static AForm *makeForm(std::string const &name, std::string const &target);


        class FormGradeTooHighException : public std::exception 
        {
            public:
                const char* what() const throw();
        };

        class FormGradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class FormInvalidException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &str, AForm const &aform);

#endif