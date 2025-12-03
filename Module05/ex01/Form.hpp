/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:24 by usuario           #+#    #+#             */
/*   Updated: 2025/12/04 00:54:52 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const   name;
        bool                is_signed;
        int const           sign_grade;
        int  const          exec_grade;

    public:
        Form(void); 
        Form(std::string const name, bool is_signed, int const sign_grade, int const exec_grade);
        Form(Form const &form);
        Form& operator =(const Form &form);
        ~Form(void);

        void setIsSigned(bool is_signed);

        const std::string getName() const;
        bool getIsSigned() const;
        int  getSigngrade() const;
        int  getExecgrade() const;

        void beSigned(Bureaucrat const &bureaucrat);

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

std::ostream	&operator<<(std::ostream &str, Form const &form);

#endif