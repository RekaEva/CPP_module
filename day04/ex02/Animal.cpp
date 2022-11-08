/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:56:39 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 14:41:49 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "";
	std::cout<<"Default constructor Animal " << std::endl;
}

Animal::Animal(const Animal &new_obj)
{
	std::cout << "Copy constructor Animal called\n";
	*this = new_obj;
}

Animal &Animal::operator =(const Animal &obj)
{
	std::cout << "Copy assignment operator in Animal called\n";
	type = obj.getType();
	return (*this);
}

Animal::~Animal()
{
		std::cout<<"Default destructor Animal " << std::endl;
}

void Animal::setType(std::string mytype)
{
	type = mytype;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound(void) const
{
	std::cout << "hi! i am animal!" << std::endl;
}