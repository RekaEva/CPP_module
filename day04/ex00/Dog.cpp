/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:23:04 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 19:05:46 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	setType("dog");
	std::cout<<"Default constructor Dog " << std::endl;
}

Dog::Dog(const Dog &new_obj) : Animal()
{
	std::cout << "Copy constructor Dog called\n";
	*this = new_obj;
}

Dog &Dog::operator =(const Dog &obj)
{
	std::cout << "Copy assignment operator in Dog called\n";
	setType(obj.getType());
	return (*this); 
}

Dog::~Dog()
{
	std::cout<<"Default destructor Dog " << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout<<"Woof - woof -woof!" << std::endl;
}