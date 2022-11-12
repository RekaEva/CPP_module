/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:22:54 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 16:53:40 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string _name): 
Form ("ShrubberyForm", 72, 45)
{
    this->target = _name;
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

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
 {
	Form::execute(bureaucrat);
	// (void) bureaucrat;
    std::srand(time(NULL));
    std::cout << "* some drilling noises *" << std::endl;
    if (std::rand() % 2) {
        std::cout << "The " << target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << "robotomy failed" << std::endl;
    }
}

