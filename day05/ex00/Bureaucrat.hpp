/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:35 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/10 18:45:14 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string name; 
		int	 grade;
	public:
		Bureaucrat(const std::string _name, int grade);
		Bureaucrat(const Bureaucrat& val);
		Bureaucrat& operator = (const Bureaucrat& val);
		~Bureaucrat();
		
		const std::string getName(void) const;
		int getGrade(void) const;
		void	setGrade(int _grade);

		void	upGrade();
		void 	downGrade();

		class GradeTooHighException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return ("A bureaucrat cannot have a level higher than 1");
			}
	} ;

	class GradeTooLowException : public std::exception {
		public:
			virtual const char*	what() const throw() {
				return ("A bureaucrat cannot have a level below 150");
			}
	} ;
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat& val);

#endif