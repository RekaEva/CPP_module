/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:44:41 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/03 16:28:40 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{ 
	std::cout << "Default constructor called\n";
	num_val = 0;
}

Fixed::Fixed(const Fixed &new_obj)
{
	std::cout << "Copy constructor called\n";
	*this = new_obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called\n";
	this->num_val = obj.getRawBits();
	return (*this); // возвращаем указатель на ноый объект(который здесь создан);
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }

int Fixed::getRawBits(void) const
{
	return (this->num_val);
}

void Fixed::setRawBits(int const raw)
{
	this->num_val = raw;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" <<std::endl;
	num_val = val * (1 << fract_val); // создаем нормальный инт из сырого
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" <<std::endl;
	num_val = std::roundf(val * (1 << fract_val)); // округляем и сдвигаем
}

float	Fixed::toFloat( void ) const
{
	return (float)num_val / float(1 << fract_val);
}

int		Fixed::toInt( void ) const
{
	return num_val / (1 << fract_val);
}

std::ostream& operator<< (std::ostream &ostrm, const Fixed &val)
{
	ostrm << val.toFloat();
	(void) val;
	return ostrm;
}