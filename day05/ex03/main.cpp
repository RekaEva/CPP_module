/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:38 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 20:17:15 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Form * f1;
	try
	{
		Intern Vasya;
		
		f1 = Vasya.makeForm("PresidentialPardonForm", "ppppppp");
		std::cout << *f1 << std::endl;
		Bureaucrat one("N1", 100);
		one.signForm(*f1);
		one.executeForm(*f1);
		std::cout << "\nthis message you have never seen\n";
		Bureaucrat two("N2", 4);
		two.executeForm(*f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		// delete f1;
	}
	delete f1;
	try
	{
		Intern Vasya;
		Form * f1;
		f1 = Vasya.makeForm("PresidentialPardonForm", "Dart Veider ,");
		std::cout << *f1 << std::endl;
		Bureaucrat two("N2", 4);
		two.signForm(*f1);
		two.executeForm(*f1);
		std::cout << "\nthis message you can see, becouse everything is right\n\n";
		// delete f1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete f1;
	return (0);
}