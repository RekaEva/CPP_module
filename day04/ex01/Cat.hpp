/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:23:01 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 18:31:24 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat :  public Animal
{
protected:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &new_obj); // Copy constructor
	Cat &operator = (const Cat &obj); //  Copy assignment operator
	virtual ~Cat();
	virtual void makeSound(void) const;
	void setIdea(const std::string &str, const unsigned int i);
};

#endif