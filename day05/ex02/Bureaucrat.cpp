/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:30 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/11 18:26:28 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{ 
	this->grade = _grade;
	if (_grade > 150) 
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat " << name << " with grade " << grade << " is created" \
	<< std::endl;
	
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat::Bureaucrat(const Bureaucrat& val): 
name(val.name), grade(val.grade)
{}

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
	if (_grade > 150) 
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = _grade;
}


void	Bureaucrat::incGrade()
{
	if ((grade - 1) <= 0)
		throw GradeTooHighException();
	--grade;
}
void	Bureaucrat::decGrade()
{
	if ((grade + 1) >150)
		throw GradeTooLowException();
	++grade;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR! Grade is too high ");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("ERROR! Grade is too low");
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &val)
{
	out << val.getName() << " Bureaucrat grade: " << val.getGrade() << std::endl;
	return out;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr<< name<< " couldn’t sign "<< form.getName()<< " because "<< e.what() << std::endl;
	}
}