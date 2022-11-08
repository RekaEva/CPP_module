/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:23:01 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 15:06:14 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat :  public Animal
{
protected:
	/* data */
public:
	Cat();
	Cat(const Cat &new_obj); // Copy constructor
	Cat &operator = (const Cat &obj); //  Copy assignment operator
	virtual ~Cat();
	virtual void makeSound(void) const;
};

#endif