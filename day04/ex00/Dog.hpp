/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:23:07 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 15:06:04 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog();
	Dog(const Dog &new_obj); // Copy constructor
	Dog &operator = (const Dog &obj); //  Copy assignment operator
	virtual ~Dog();
	void	makeSound(void) const;
};

#endif