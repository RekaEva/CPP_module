/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:38 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 16:58:01 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat one("N1", 10);
	Bureaucrat two("N2", 149);
	Bureaucrat three("N3", 76);
	Bureaucrat four("N4", 9);

	// try
	// {
	// 	ShrubberyCreationForm T("tree");
	// 	// std::cout << T << std::endl;
	// 	one.executeForm(T);
	// 	std::cout << "this message you have never seen\n";
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout  << std::endl;
	
	// try
	// {
	// 	ShrubberyCreationForm T("tree");
	// 	// std::cout << T << std::endl;
	// 	one.signForm(T);
	// 	one.executeForm(T);
	// 	std::cout << "this message you can see, becouse everything is right\n";
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	
	// try
	// {
	// 	ShrubberyCreationForm T("tree");
	// 	std::cout << T << std::endl;
	// 	three.signForm(T);
	// 	two.executeForm(T);
	// 	std::cout << "this message you have never seen\n";
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	try
	{
		RobotomyRequestForm R("robot");
		std::cout << R << std::endl;
		four.signForm(R);
		four.executeForm(R);
		std::cout << "this message you can see, becouse everything is right\n";
		RobotomyRequestForm R1("Robot_one");
		std::cout << R1 << std::endl;
		four.signForm(R1);
		three.executeForm(R1);
		std::cout << "this message you have never seen\n";
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}