/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:35 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/11 18:28:40 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name; 
		int	 grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string _name, int grade);
		Bureaucrat(const Bureaucrat& val);
		Bureaucrat& operator = (const Bureaucrat& val);
		~Bureaucrat();
		
		const std::string getName(void) const;
		int getGrade(void) const;
		void	setGrade(int _grade);

		void	incGrade();
		void 	decGrade();
		void	signForm(Form& form);

		class GradeTooHighException : public std::exception {
		public:
			virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception {
		public:
			virtual const char*	what() const throw();
	    };
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat& val);

#endif