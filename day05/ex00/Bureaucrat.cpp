/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:30 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/10 18:50:54 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{ 
	this->grade = _grade;
	try {
		this->setGrade(grade);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{	
}

Bureaucrat::Bureaucrat(const Bureaucrat& val): name(val.name), grade(val.grade)
{
	
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& val)
{
	if (this == &val)
		return *this;
	grade = val.grade;
	return *this;
}

const std::string	Bureaucrat::getName() const 
{
	return name;
}

int			Bureaucrat::getGrade() const 
{
	return grade;
}

void		Bureaucrat::setGrade(int _grade)
{
	grade = 150;
	if (_grade > 150) 
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = _grade;
}


void	Bureaucrat::upGrade()
{
	try {
		this->setGrade(--grade);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
void	Bureaucrat::downGrade()
{
	try {
		this->setGrade(++grade);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}


// const char* Bureaucrat::GradeTooLowException::what() const throw()
// {
// 	return "ERROR! Grade is too low!";
// }

std::ostream& operator<< (std::ostream &out, const Bureaucrat &val)
{
	out << val.getName() << " Bureaucrat grade: " << val.getGrade() << std::endl;
	return out;
}

