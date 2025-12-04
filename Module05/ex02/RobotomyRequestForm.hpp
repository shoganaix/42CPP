/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:19:01 by root              #+#    #+#             */
/*   Updated: 2025/12/04 12:29:43 by msoriano         ###   ########.fr       */
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

class AForm;
class Bureaucrat;

class RobotomyRequestForm: public Aform
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
};

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &aform);

#endif