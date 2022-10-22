/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:48:43 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/22 21:16:41 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : curIndex(0)
{
}

PhoneBook::~PhoneBook()
{
}
void PhoneBook::add()
{
	std::string input;

	std::cout << "first name: " << std::endl;
	std::cin >> input;
	mybook[curIndex].setName(input);
	std::cout << "last name: " << std::endl;
	std::cin >> input;
	mybook[curIndex].setLastname(input);
	std::cout << "nick name: " << std::endl;
	std::cin >> input;
	mybook[curIndex].setNick(input);
	std::cout << "phone number: " << std::endl;
	std::cin >> input;
	mybook[curIndex].setNumber(input);
	std::cout << "secret: " << std::endl;
	std::cin >> input;
	mybook[curIndex].setSecret(input);
	curIndex++;
	curIndex %= MAX_SIZE;
}

void printContactShort(Contact c)
{	

}

void PhoneBook::search()
{
	int index = -1;
	int input; // как преобразовать строку в число в с++
	
	std::cout << "Enter the index from 0 to 7 (both included): " << std::endl;
	std::cin >> input;
	std::cout << "\n|     Index|First name| Last name|  Nickname|" << std::endl;
	while (++index < MAX_SIZE)
		printContactShort(index);
}
