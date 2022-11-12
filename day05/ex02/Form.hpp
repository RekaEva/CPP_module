/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:49:48 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 13:24:48 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
# include <string> 
#include <fstream>

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				isSigned;
	const int			gradeToSign;
	const int			gradeToExecute;
public:
    Form(const std::string & _name = "_nonum", int grade2sign = 1, int grade2execute = 1);
	Form(const Form &val);
	~Form();
	Form& operator = (const Form &val);

	const std::string&	getName() const;
	bool	getSign() const;
	int		getSignGrade() const;
	int		getExecGrade() const;

	void	beSigned(const Bureaucrat &b);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception	
	{
		std::string msg;
		public:
			GradeTooHighException(const std::string& _msg = "ERROR! Grade form is too high");
			virtual ~GradeTooHighException() throw();
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
			std::string msg;
		public:
			GradeTooLowException(const std::string& _msg = "ERROR! Grade form is too low");
			virtual ~GradeTooLowException() throw();
			virtual const char* what() const throw();
	};

};

std::ostream& operator << (std::ostream &out, const Form& val);

#endif