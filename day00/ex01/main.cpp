/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:07:48 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/23 14:29:28 by cpollito         ###   ########.fr       */
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
		std::cin >> input;
		if (input == "ADD")
			phoneBook.add();
		if (input == "SEARCH")
			phoneBook.search();
	}
	return 0;
}
