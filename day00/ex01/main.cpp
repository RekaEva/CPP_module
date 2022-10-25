/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:07:48 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/25 15:40:16 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string input;

	while (input != "EXIT")
	{
		std::cout << "Enter a command(ADD, SEARCH, EXIT): " << std::endl;	
		std::getline(std::cin, input);
		if (input == "ADD")
			phoneBook.add();
		else if (input == "SEARCH")
			phoneBook.search();
		else if (input.empty())
			std::cout << "Command can't be empty. Please, try again" << std::endl;
		else if (input != "ADD" && input != "SEARCH" && input != "EXIT" && !input.empty())	
			std::cout << "Wrong command. Please, try again" << std::endl;
	}
	return 0;
}
