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

#ifndef Intern_HPP
#define Intern_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Intern
{
    public:
        Intern(void); 
        Intern(Intern const &intern);
        Intern& operator=(const Intern &intern);
        ~Intern(void);


        AForm *makeForm(std::string const &name, std::string const &target);
};

#endif