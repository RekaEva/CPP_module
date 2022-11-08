/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:23:04 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 19:01:50 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include "Cat.hpp"

Dog::Dog() : Animal(),  brain(new Brain())
{
	setType("cat");
	std::cout << "Default constructor Dog class, type is " << getType() << std::endl;
}

Dog::Dog(const Dog &new_obj) : Animal(), brain(new Brain())
{	
	std::cout << "Copy constructor Dog called\n";
	*this = new_obj;
}

Dog &Dog::operator =(const Dog &obj)
{
	std::cout << "Copy assignment operator in Dog called\n";
	if (this == &obj)
		return *this;
	setType(obj.getType());
	*this->brain = *obj.brain;
	return *this;
}

Dog::~Dog()
{
	std::cout<<"Default destructor Dog " << std::endl;
	delete brain;
}

void Dog::makeSound(void) const
{
	std::cout<<"Woof - woof -woof!" << std::endl;
}

void Dog::setIdea(const std::string &str, const unsigned int i)
{
	brain->setIdea(str, i);
}
