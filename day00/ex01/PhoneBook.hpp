#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:
	void add();
	void search();

	private:
		int		curIndex;
		Contact mybook[8];
};


#endif