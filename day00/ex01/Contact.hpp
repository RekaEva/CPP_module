/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:49:45 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/22 20:57:13 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		void setName(std::string name);
		void setLastname(std::string name);
		void setNick(std::string name);
		void setNumber(std::string number);
		void setSecret(std::string secret);
		std::string	getName();
		std::string	getLastname();
		std::string	getNickname();
		std::string	getNumber();
		std::string	getSecret();

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string secret;
};

#endif