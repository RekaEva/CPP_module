/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:49:51 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 14:57:08 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string & _name, int _grade2sign, int _grade2execute) :
	name(_name), isSigned(false), gradeToSign(_grade2sign), gradeToExecute(_grade2execute)
{
	if (gradeToSign < 1)
		throw GradeTooHighException("Error! Form sign grade is to high");
	else if (gradeToExecute < 1)
		throw GradeTooHighException("Error! Form execute grade is to high");
	else if (gradeToSign > 150)
		throw GradeTooHighException("Error! Form sign grade is to low");
	else if (gradeToExecute > 150)
		throw GradeTooHighException("Error! Form execute grade is to low");
	std::cout << "form " << name << " is created" << std::endl;
}

Form::~Form()
{
}

Form::Form(const Form &val) : name(val.name), isSigned(val.isSigned),
	gradeToSign(val.gradeToSign), gradeToExecute(val.gradeToExecute)
{}

Form& Form::operator=(const Form &val)
{
	if(this == &val)
		return *this;
	isSigned = val.isSigned;
	return *this;
}

const std::string&	Form::getName() const
{
	return name;
}

bool	Form::getSign() const
{
	return isSigned;
}
int		Form::getSignGrade() const
{
	return gradeToSign;
}

int		Form::getExecGrade() const
{ 
	return gradeToExecute;
}

std::ostream& operator << (std::ostream &out, const Form& val)
{
    out << "Forms:" << val.getName();
    if ((val.getSign()))
       out <<  " is signed\n" ;
    else
       out <<  " is not signed\n";
	out << "Grade to sign:" << val.getSignGrade() << std::endl;;
	out << "Grade to execute:" << val.getExecGrade() << std::endl;
	return out;
}

void	Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > gradeToSign)
        throw GradeTooLowException("the bureaucrat grade is not sufficient to sign this form.");
    else if (isSigned)
		throw GradeTooLowException("this form is already signed.");
    isSigned = true;
}

Form::GradeTooHighException::GradeTooHighException(const std::string& _msg) : msg(_msg)
{}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

const char* Form::GradeTooHighException::what() const throw()
{
	return msg.c_str();
}

// to low
Form::GradeTooLowException::GradeTooLowException(const std::string& _msg) : msg(_msg)
{}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

const char* Form::GradeTooLowException::what() const throw()
{
	return msg.c_str();
}