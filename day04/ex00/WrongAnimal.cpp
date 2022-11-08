/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:39:02 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 14:50:44 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "";
	std::cout<<"Default constructor WrongAnimal " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &new_obj)
{
	std::cout << "Copy constructor WrongAnimal called\n";
	*this = new_obj;
}

WrongAnimal &WrongAnimal::operator =(const WrongAnimal &obj)
{
	std::cout << "Copy assignment operator in WrongAnimal called\n";
	type = obj.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
		std::cout<<"Default destructor WrongAnimal " << std::endl;
}

void WrongAnimal::setType(std::string mytype)
{
	type = mytype;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "hi! i am Wronganimal!" << std::endl;
}