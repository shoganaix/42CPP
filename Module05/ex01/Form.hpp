/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 00:37:24 by usuario           #+#    #+#             */
/*   Updated: 2025/10/17 20:44:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include <iostream>

class Form
{
    private:

        std::string const   name;
        bool                signed;
        int                 sign_grade;
        int                 exec_grade;

    public:
        Form(void); 
        Form(std::string name, int sign_grade, int exec_grade);
        Form(Form const &form);
        Form& operator =(const Form &form);
        ~Form(void);

        void setName(std::string const name);
        void setSigned(bool signed);
        void setSigngrade(int grade);
        void setExecgrade(int grade);

        const std::string getName() const;
        bool getSigned() const;
        int  getSigngrade() const;
        int  getExecgrade() const;

        void sign();

        class GradeTooHighException : public std::exception 
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &str, Form const &form);

#endif