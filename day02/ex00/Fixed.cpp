/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:44:41 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/03 13:56:05 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{ 
	std::cout << "Default constructor called\n";
	num_val = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &obj) // пишем ключевое слово operator, показываем какой(=), и говорим откуда копировать данные
{
	std::cout << "Copy assignment operator called\n";
	this->num_val = obj.getRawBits();
	return (*this); // возвращаем указатель на ноый объект(который здесь создан);
}

/*наш класс будет реализовать оператор присваивания по такому-то алгоритму
делаем свой алгоритм.
чтобы перегрузить оператор мы должны написать ключевое слово "operator"
и затем поставить тот оператор, который перегружаем. у нас оператор возвращаем новый объект(?) Fixed.
а справа прописываем откуда оператор будет брать данные для копирования.
*/
Fixed::Fixed(const Fixed &new_obj)
{
	std::cout << "Copy constructor called\n";
	*this = new_obj;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return (this->num_val);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" <<std::endl;
	this->num_val = raw;
}
