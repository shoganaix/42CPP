/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:19:04 by root              #+#    #+#             */
/*   Updated: 2025/10/21 20:12:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Aform::Aform("ShrubberyCreationForm", false, 145, 137), target_file()
{
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
    std::cout << "\033[33mUndefined shrubberyCreationForm \033[0m is created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Aform::Aform("ShrubberyCreationForm", false, 145, 137), target_file(target)
{
    //
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
    std::cout << "\033[33m" << getName() << " ShrubberyCreationForm form\033[0m is created" << std::endl;
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
    std::cout << "\033[33m" << this->target_file << "\033[0m ShrubberyCreationForm is now destroyed." << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (target_file);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream	outfile;
	
	outfile.open((this->target_file + "_shrubbery").c_str());
	if (outfile.fail())
	{
		std::cout << "Could not open output file" << std::endl;
		return ;
	}
	outfile << "TREE";
	outfile.close();
	std::cout << "Bureaucrat " << executor.getName() << " successfully created a Shrubbery form" << std::endl;
}

std::ostream& operator <<(std::ostream &str, const ShrubberyCreationForm &copy) 
{
    return (str << "ShrubberyCreationForm target: \033[35m" << copy.getTarget() << "\033[0m" << std::endl);
}
