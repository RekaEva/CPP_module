/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:38 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/11 18:36:44 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form	one;
	Form	two("Two", 10, 15);
	try	{
		Form	err1("Wrong_a", 280, 15);
	}
	catch(const std::exception& e)	
	{
		std::cout << e.what() << std::endl;
	}

	try	
	{
		Form	err2("Wrong_b", 10, 900);}
	catch(const std::exception& e)	
	{
		std::cout << e.what() << std::endl;
	}

	try	{
		Form	err3("Err3", 0, 15);	}
	catch(const std::exception& e)	{
		std::cout << e.what() << '\n';
	}
	try	{
		Form	err4("Err4", 10, 0);}
	catch(const std::exception& e)	{
		std::cout << e.what() << '\n';
	}

	std::cout << "\nSIGNED FORMS HERE" << '\n';
	try{ 
		Form	five("for_Geralt", 9, 15);
		Bureaucrat Jim("Jim", 10);
		Jim.signForm(five);
		Jim.incGrade();
		Jim.signForm(five);
		std::cout << "\nprint" << '\n';
		std::cout << five << std::endl;
	}
	catch(const std::exception& e)	{
		std::cout << e.what() << '\n';}
	return (0);
}