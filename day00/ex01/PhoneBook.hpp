/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:49:33 by cpollito          #+#    #+#             */
/*   Updated: 2022/10/24 14:49:45 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

# define MAX_SIZE 8

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
	private:
		int		curIndex;
		Contact mybook[MAX_SIZE];
		void printShortContact(int index);
		void printFullContact(int index);
		void PrintTen(std::string str);
};

#endif
