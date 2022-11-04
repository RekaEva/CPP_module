/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:35:57 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/03 18:00:45 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{ 
	num_val = 0;
}

Fixed::Fixed(const Fixed &new_obj)
{
	*this = new_obj;
}

Fixed::Fixed(const int val)
{
	num_val = val * (1 << fract_val); 
}

Fixed::Fixed(const float val)
{
	num_val = std::roundf(val * (1 << fract_val));
}

Fixed::~Fixed() { }

int Fixed::getRawBits(void) const
{
	return (this->num_val);
}

void Fixed::setRawBits(int const raw)
{
	this->num_val = raw;
}

float	Fixed::toFloat( void ) const
{
	return (float)num_val / float(1 << fract_val);
}

int		Fixed::toInt( void ) const
{
	return num_val / (1 << fract_val);
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	this->num_val = obj.getRawBits();
	return (*this);
}

std::ostream& operator<< (std::ostream &ostrm, const Fixed &val)
{
	ostrm << val.toFloat();
	(void) val;
	return ostrm;
}

// Comparison operators

bool	Fixed::operator > (const Fixed &val) const
{
	return this->getRawBits() > val.getRawBits();
}

bool	Fixed::operator <= (const Fixed &val) const
{
	return !(*this > val);
}

bool	Fixed::operator < (const Fixed &val) const
{
	return this->getRawBits() < val.getRawBits();
}

bool	Fixed::operator >= (const Fixed &val) const
{
	return !(*this < val);
}

bool	Fixed::operator == (const Fixed &val) const
{
	return this->getRawBits() == val.getRawBits();
}

bool	Fixed::operator != (const Fixed &val) const
{
	return !(*this == val);
}

// Math operators

Fixed	Fixed::operator + (const Fixed &val) const
{
	return Fixed(this->toFloat() + val.toFloat());
}

Fixed	Fixed::operator - (const Fixed &val) const
{
	return Fixed(this->toFloat() - val.toFloat());
}

Fixed	Fixed::operator * (const Fixed &val) const
{
	return Fixed(this->toFloat() * val.toFloat());
}

Fixed	Fixed::operator / (const Fixed &val) const
{
	return Fixed(this->toFloat() / val.toFloat());
}

// Increment, decrement

Fixed&	Fixed::operator ++ ()
{
	++num_val;
	return *this;
}

Fixed&	Fixed::operator -- ()
{
	--num_val;
	return *this;
}

Fixed	Fixed::operator ++ (int n)
{
	(void) n;
	Fixed t(*this);
	++(*this);
	return t;
}

Fixed	Fixed::operator -- (int n)
{
	(void) n;
	Fixed t(*this);
	--(*this);
	return t;
}

// Min, max function

Fixed&	Fixed::min(Fixed &v1, Fixed &v2)
{
	return (v1 > v2)? v2: v1;
}

const Fixed&	Fixed::min(const Fixed &v1, const Fixed &v2)
{
	return (v1 > v2)? v2: v1;
}

Fixed&	Fixed::max(Fixed &v1, Fixed &v2)
{
	return (v1 > v2)? v1: v2;
}

const Fixed&	Fixed::max(const Fixed &v1, const Fixed &v2)
{
	return (v1 > v2)? v1: v2;
}