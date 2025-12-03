/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:24 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 00:54:56 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Aform
{
    private:
        std::string const   name;
        bool                is_signed;
        int const           sign_grade;
        int  const          exec_grade;

    public:
        Aform(void); 
        Aform(std::string const name, bool is_signed, int const sign_grade, int const exec_grade);
        Aform(Aform const &aform);
        Aform& operator =(const Aform &aform);
        virtual ~Aform(void);

        void setIsSigned(bool is_signed);

        const std::string getName() const;
        bool getIsSigned() const;
        int  getSigngrade() const;
        int  getExecgrade() const;

        void beSigned(Bureaucrat const &bureaucrat);
        void beExecuted(Bureaucrat const &bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;

        class formgradeTooHighException : public std::exception 
        {
            public:
                const char* what() const throw();
        };

        class formgradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class formNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &str, Aform const &aform);

#endif