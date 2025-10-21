/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:19:01 by root              #+#    #+#             */
/*   Updated: 2025/10/21 20:12:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"


class AForm;
class Bureaucrat;

class ShrubberyCreationForm: public Aform
{
    private:
        std::string   target_file;

    public:
        ShrubberyCreationForm(void); 
        ShrubberyCreationForm(std::string const target_file);
        ShrubberyCreationForm(ShrubberyCreationForm const &shrubberyCreationForm);
        ShrubberyCreationForm& operator =(const ShrubberyCreationForm &shrubberyCreationForm);
        ~ShrubberyCreationForm(void);

        std::string  getTarget() const;

        void execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &aform);

#endif