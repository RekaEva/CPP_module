/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:58:38 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/10 18:33:35 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// int	main(void) 
// {
// 	{
// 		Bureaucrat	one("Lolo", 10);
// 		std::cout << one;
// 	}
// 	{
// 		std::cout << std::endl;
// 		Bureaucrat	chel("Borya", -23);
// 		std::cout << chel;
// 		std::cout << std::endl;
// 		Bureaucrat	chel2("Kolya", 323);
// 		std::cout << chel2.getName() << " : " << chel.getGrade() << std::endl;
// 	}
// 	{
// 		std::cout << std::endl;
// 		Bureaucrat	chel("Tom", 1);
// 		std::cout << chel;
// 		chel.upGrade();
// 		std::cout << chel;
// 		chel.downGrade();
// 		std::cout << chel;
// 	}
// 	return 0;
// }


int	main(void) {
{
	Bureaucrat	chel("Valera", 13);
	std::cout << chel;
}
{
	std::cout << std::endl;
	Bureaucrat	chel("Borya", -23);
	std::cout << chel;
	std::cout << std::endl;
	Bureaucrat	chel2("Kolya", 323);
	std::cout << chel2.getName() << " : " << chel.getGrade() << std::endl;
}
{
	std::cout << std::endl;
	Bureaucrat	chel("Tom", 1);
	std::cout << chel;
	chel.upGrade();
	std::cout << chel;
	chel.downGrade();
	std::cout << chel;
}
	return 0;
}
