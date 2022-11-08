/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:56:36 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 15:06:25 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &new_obj); // Copy constructor
	Animal &operator = (const Animal &obj); //  Copy assignment operator
	virtual ~Animal();
	std::string	getType(void) const;
	void setType(std::string mytype); 
	virtual void makeSound(void) const;
};

#endif