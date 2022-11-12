/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:59:45 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 19:00:09 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define  INTERN_HPP

#include <exception>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& val);
	Intern& operator= (const Intern& val);
	~Intern();

	Form* makeForm(const std::string& formName, const std::string& target);
	
	class NoForm : public std::exception{
	public:
		virtual const char* what() const throw();
	};
};

#endif