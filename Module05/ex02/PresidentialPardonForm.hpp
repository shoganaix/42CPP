/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:19:01 by root              #+#    #+#             */
/*   Updated: 2025/12/04 12:29:41 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <iostream>
#include <fstream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class PresidentialPardonForm: public Aform
{
    private:
        std::string   target;

    public:
        PresidentialPardonForm(void); 
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(PresidentialPardonForm const &presidentialPardonForm);
        PresidentialPardonForm& operator =(const PresidentialPardonForm &presidentialPardonForm);
        ~PresidentialPardonForm(void);

        std::string  getTarget() const;

        void execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &aform);

#endif