/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:22:58 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 18:55:49 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(),  brain(new Brain())
{
	setType("cat");
	std::cout << "Default constructor Cat class, type is " << getType() << std::endl;
}

Cat::Cat(const Cat &new_obj) : Animal(), brain(new Brain())
{	
	std::cout << "Copy constructor Cat called\n";
	*this = new_obj;
}

Cat &Cat::operator =(const Cat &obj)
{
	std::cout << "Copy assignment operator in Cat called\n";
	if (this == &obj)
		return *this;
	setType(obj.getType());
	*this->brain = *obj.brain;
	return *this;
}

Cat::~Cat()
{
	std::cout<<"Default destructor Cat " << std::endl;
	delete brain;
}

void Cat::makeSound(void) const
{
	std::cout<<"Meow. meow.. Meaaaaa! " << std::endl;
}

void Cat::setIdea(const std::string &str, const unsigned int i)
{
	brain->setIdea(str, i);
}
