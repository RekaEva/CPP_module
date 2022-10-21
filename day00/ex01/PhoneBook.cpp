#include "PhoneBook.hpp"

void PhoneBook::add()
{
	std::string input;

	std::cout << "first name: " << std::endl;
	std::cin >> input;
	mybook[curIndex].setName(input);
	// все поля переданны
	++curIndex;
}