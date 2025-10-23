/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:19:01 by root              #+#    #+#             */
/*   Updated: 2025/10/23 17:44:42 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <iostream>
#include <fstream>
#include <cstdlib> //for srand() function
#include <ctime> //for time

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm
{
    private:
        std::string   target;

    public:
        RobotomyRequestForm(void); 
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(RobotomyRequestForm const &robotomyRequestForm);
        RobotomyRequestForm& operator =(const RobotomyRequestForm &robotomyRequestForm);
        ~RobotomyRequestForm(void);

        std::string  getTarget() const;

        void execute(Bureaucrat const &executor) const;
        static AForm *makeForm(AForm *form, std::string const &name, std::string const &target);
};

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &aform);

#endif