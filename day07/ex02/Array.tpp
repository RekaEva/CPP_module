/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:59:05 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/14 17:24:04 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() 
{
	this->array = new T[0];
	this->_size = 0;
}

template<typename T>
Array<T>::~Array() 
{
	delete []array;
}

template<typename T>
Array<T>::Array(const Array &val) : array(new T[0]), _size(val._size)
{
	for(unsigned int i = 0; i < _size; i++)
		array[i] = val.array[i];
}

template<typename T>
Array<T>::Array(const unsigned int n) : array(new T[n]), _size(n)
{}

template<typename T>
T& Array<T>::operator= (const Array& other)
{
	if(this == &other)
		return *this;
	delete [] array;
	_size = other.dim;
	array = new T[_size ];
	for(unsigned int i = 0; i < _size ; i++)
		array[i] = other.array[i];
	return *this;
}

template<typename T>
T& Array<T>::operator[] (const unsigned int idx)
{
	if (idx >= _size )
		throw OutOfRange();
	return array[idx];
}

template<typename T>
unsigned int	Array<T>::size() const
{	return _size ;
}

template <typename T>
const char* Array<T>::OutOfRange::what() const throw()
{
	return "Index out of range.";
}