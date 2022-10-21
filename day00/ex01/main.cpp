/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:07:48 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/21 19:32:05 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

// Значения переменных a и b определяет caller
void printValues(int a, int b)
{
std::cout << a << std::endl;
std::cout << b << std::endl;
}

int main()
{
	PhoneBook phoneBook;
	std::string input;

	std::cin >> input;
	while (input != "EXIT")
	{
		if (input == "ADD")
			phoneBook.add();
		std::cin >> input;
	}
	
}