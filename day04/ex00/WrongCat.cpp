/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:39:12 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 16:25:39 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	setType("wrongcat");
	std::cout<<"Default constructor WrongCat " << std::endl;
}

WrongCat::WrongCat(const WrongCat &new_obj) : WrongAnimal()
{
	std::cout << "Copy constructor WrongCat called\n";
	*this = new_obj;
}

WrongCat &WrongCat::operator =(const WrongCat &obj)
{
	std::cout << "Copy assignment operator in WrongCat called\n";
	setType(obj.getType());
	return (*this); 
}

WrongCat::~WrongCat()
{
	std::cout<<"Default destructor WrongCat " << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout<<"Meow. meow.. Meaaaaa! wrong" << std::endl;
}