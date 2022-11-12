/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:22:54 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 16:00:37 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string _target): 
Form ("ShrubberyForm", 145, 137)
{
 	this->target = _target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &val) : 
Form(val.getName(), val.getSignGrade(), val.getExecGrade()), target(val.target)
{
	*this = val;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm &val)
{
	if (this == &val)
		return *this;
	Form::operator=(val); 
	target = val.target;
	return *this;
}

