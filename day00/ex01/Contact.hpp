#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		void setName(std::string name);
		// void setLastname(std::string name);
		// void setNick(std::string name);
		// void setNumber(std::string number);
		// void setSecret(std::string secret);
		// std::string	getName();
		// std::string	getLastname();
		// std::string	getNick();
		// std::string	getNumber();
		std::string	getSecret();

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string secret;

};


#endif