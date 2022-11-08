/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:22:58 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 14:29:19 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	setType("cat");
	std::cout<<"Default constructor Cat " << std::endl;
}

Cat::Cat(const Cat &new_obj) : Animal()
{
	std::cout << "Copy constructor Cat called\n";
	*this = new_obj;
}

Cat &Cat::operator =(const Cat &obj) // пишем ключевое слово operator, показываем какой(=), и говорим откуда копировать данные
{
	std::cout << "Copy assignment operator in Cat called\n";
	setType(obj.getType());
	return (*this); // возвращаем указатель на ноый объект(который здесь создан);
}

Cat::~Cat()
{
	std::cout<<"Default destructor Cat " << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout<<"Meow. meow.. Meaaaaa! " << std::endl;
}