/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:22:49 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 17:31:41 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string _target) : 
	Form("PresidentPardonForm", constSignGrade, constExecGrade), target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& val) :
	Form(val), target(val.target)
{	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm& val)
{
	if (this == &val)
		return *this;
	Form::operator=(val); 
	target = val.target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << target <<" you has been pardoned by Zaphod Beeblebrox." << std::endl;
}