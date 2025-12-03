/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:19:04 by root              #+#    #+#             */
/*   Updated: 2025/12/04 00:55:08 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Aform::Aform("ShrubberyCreationForm", false, 145, 137), target_file()
{
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
    std::cout << "\033[33mUndefined shrubberyCreationForm \033[0m created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Aform::Aform("ShrubberyCreationForm", false, 145, 137), target_file(target)
{
    //
    std::cout << "ShrubberyCreationForm Constructor() called" << std::endl;
    std::cout << "\033[33m" << getName() << " \033[32m" << getTarget() << "\033[0m created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Aform::Aform(copy), target_file(copy.target_file)
{
    std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    Aform::operator=(copy);
    this->target_file = copy.target_file;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
    std::cout << "\033[33m" << getName() << " \033[32m" << getTarget() << "\033[0m is now destroyed." << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (target_file);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream	outfile;

    if (!this->getIsSigned())
        throw formNotSignedException();
    if (executor.getGrade() > this->getExecgrade()){
        throw Bureaucrat::gradeTooLowException(); }

	outfile.open((this->target_file + "_shrubbery").c_str());
	if (outfile.fail())
	{
		std::cout << "Could not open output file" << std::endl;
		return ;
	}
	outfile << TREE;
	outfile.close();
	std::cout << "Bureaucrat \033[33m" << executor.getName() << "\033[0m executed and created \033[33m" << this->target_file << "_shrubbery\033[0m form" << std::endl;
}

std::ostream& operator <<(std::ostream &str, const ShrubberyCreationForm &copy) 
{
    return (str << "\033[35m" << copy.getTarget() << "_shrubbery\033[0m form: \033[35msign grade 145, exec grade 137.\033[0m" << std::endl);
}
