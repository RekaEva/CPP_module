/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:23:04 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 16:51:52 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _name):
Form ("ShrubberyForm", 145, 137), constSignGrade(145), constExecGrade(137)
{
    this->target = _name;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &val) : 
Form(val.getName(), val.getSignGrade(), val.getExecGrade()), constSignGrade(val.constSignGrade), constExecGrade(val.constExecGrade), target(val.target)
{
	*this = val;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm &val)
{
	if (this == &val)
		return *this;
	Form::operator=(val); 
	target = val.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream oFile;
	oFile.open(target + "_shrubbery");
	if(oFile.is_open())
	{
		oFile << "\n";
		oFile << "        /\\        \n";
		oFile << "       ****       \n";
		oFile << "      ******      \n";
		oFile << "     ********     \n";
		oFile << "    **********    \n";
		oFile << "   ************   \n";
		oFile << "  **************  \n";
		oFile << "        ||        \n";
		oFile << std::endl;
	}
	else
		std::cerr << "Error! Can't open file "<< target << "_shrubbery" << std::endl;
}
