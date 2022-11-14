/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:38:48 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/14 17:14:55 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array
{
private:
	T *array;
	unsigned int _size;
public:
	Array();
	Array(const unsigned int n);
	Array(const Array &val);
	T& operator=(const Array &other);
	T& operator[](const unsigned int idx);
	~Array();
	unsigned int size() const;

	class OutOfRange : public std::exception {
	public:
		virtual const char* what() const throw();
	};
	
};

#endif

// #ifndef ARRAY_HPP
// # define ARRAY_HPP

// # define MAX_VAL 750

// # include <iostream>
// # include <ctime>
// # include <cstdlib>

// template<class Type>
// class Array
// {
// private:
// 	Type*			_DynamicArray;
// 	unsigned int	_size;
// public:
// 	Array<Type>() : _DynamicArray(NULL), _size(0) {
// 		std::cout << "Default constructor Array called" << std::endl;
// 	};
// 	Array<Type>(unsigned int n) {
// 		std::cout << "Custom constructor Array called" << std::endl;
// 		if (n == 0)
// 			_DynamicArray = NULL;
// 		else
// 			this->_DynamicArray = new Type[n]();
// 		this->_size = n;
// 	};
// 	Array<Type>(const Array<Type> &other) {
// 		std::cout << "Copy constructor Array called" << std::endl;
// 		_size = other._size;
// 		_DynamicArray = new Type[_size];
// 		for (unsigned int i = 0; i < _size; ++i)
// 			this->_DynamicArray[i] = other._DynamicArray[i];
// 	};
// 	Array<Type>&	operator=(const Array<Type> &other) {
// 		std::cout << "Copy assignment operator Array called" << std::endl;
// 		if (this->_DynamicArray != NULL)
// 			delete [](this->_DynamicArray);
// 		this->_size = other.size();
// 		this->_DynamicArray = new Type [this->_size];
// 		for (unsigned int i = 0; i < this->_size; i++)
// 			this->_DynamicArray[i] = other[i];
// 		return *this;
// 	};
// 	~Array<Type>() {
// 		std::cout << "Destructor Array called" << std::endl;
// 		if (this->_DynamicArray)
// 			delete [](this->_DynamicArray);
// 	};

// 	Type &operator[](const unsigned int index) const {
// 		if (index >= _size)
// 			throw std::range_error("Index out of bounds");
// 		return this->_DynamicArray[index];
// 	}

// 	int	size() const {
// 		return this->_size;	
// 	};
// };

// #endif