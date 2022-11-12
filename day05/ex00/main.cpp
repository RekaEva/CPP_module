/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:38 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 20:05:40 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b1("Mike", 2);
	try{
		std::cout << "--- create Bureaucrat with grade 0 ---" << std::endl;
		Bureaucrat b2("Stiv", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " for bureaucrat " << std::endl << std::endl;
	}
	Bureaucrat b3("Tom", 130);
	b3 = Bureaucrat("copyTom", 149);
	std::cout << b3 << std::endl;
	std::cout << b1 << std::endl;
	
	std::cout << "try DEGRADE" << std::endl;
	Bureaucrat b4("Mike", 150);
	try
	{
		std::cout << "--- degrade Tom ---" << std::endl;
		b3.decGrade();
		std::cout << b3 << std::endl;
		b4.decGrade();
		std::cout << b4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() <<std::endl << std::endl;
	}
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl;

	std::cout << "try UPGRADE" << std::endl;
	try
	{
		std::cout << "--- upgrade Tom ---" << std::endl;
		b3.incGrade();
		std::cout << b3 << std::endl;
		Bureaucrat b5("Mikki", 1);
		b5.incGrade();
		std::cout << b5 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() <<std::endl << std::endl;
	}
	
	return (0);
}