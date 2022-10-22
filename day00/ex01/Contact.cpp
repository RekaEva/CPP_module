/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:48:36 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/22 15:04:09 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//setter
void Contact::setName(std::string name)
{
	this->firstName = name;
}
void Contact::setLastname(std::string name)
{
	this->lastName = name;
}
void Contact::setNick(std::string name)
{
	this->nickName = name;
}
void Contact::setNumber(std::string number)
{
	this->phoneNumber = number;
}
void Contact::setSecret(std::string secret)
{
	this->secret = secret;
}
// getter
std::string Contact::getName()
{
	return (this->firstName);
}

std::string Contact::getLastname()
{
	return (this->lastName);
}

std::string Contact::getNickname()
{
	return (this->nickName);
}

std::string Contact::getNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getSecret()
{
	return (Contact::secret);
}