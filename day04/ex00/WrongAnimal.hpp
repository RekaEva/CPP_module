/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:39:06 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 14:45:04 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &new_obj); // Copy constructor
	WrongAnimal &operator = (const WrongAnimal &obj); //  Copy assignment operator
	~WrongAnimal();
	std::string	getType(void) const;
	void setType(std::string mytype); 
	void makeSound(void) const;
};

#endif