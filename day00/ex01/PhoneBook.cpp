/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:48:43 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/24 16:51:02 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <string>

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

void PhoneBook::PrintTen(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

void PhoneBook::printShortContact(int index)
{
	std::string str;

	std::cout << "|" << std::setw(10) << index + 1 << "|";
	PrintTen(mybook[index].getName());
	PrintTen(mybook[index].getLastname());
	PrintTen(mybook[index].getNickname());
	std::cout << std::endl;
}

void PhoneBook::printFullContact(int index)
{
	std::cout << "first name " << mybook[index].getName() << std::endl;
	std::cout << "last name " << mybook[index].getLastname() << std::endl;
	std::cout << "nickname " << mybook[index].getNickname() << std::endl;
	std::cout << "phone number " << mybook[index].getNumber() << std::endl;
	std::cout << "secret " << mybook[index].getSecret() << std::endl;
}
 
void PhoneBook::search()
{
	int index = -1;
	std::string str;
	
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	while (++index < MAX_SIZE)
		printShortContact(index);
	std::cout << "Enter the index from 1 to " << MAX_SIZE << std::endl;
	std::cin >> str;
	if (std::cin.eof())
		return ;
	index = 0;
	if (str.length() == 1 && std::isdigit(str[0]))
		index = std::stoi(str);
	std::cin.ignore(32767, '\n');
	if (index > 0 && index < 9)
	{
		if ((mybook[index - 1].getName().length() != 0))
			printFullContact(index - 1);
		else
			std::cout << "Error: this contact does not exist";
		std::cout << std::endl;
	}
	else
		std::cout << "Error: this contact does not exist" << std::endl;
}
