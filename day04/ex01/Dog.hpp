/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:23:07 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 18:56:53 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	Dog(const Dog &new_obj);
	Dog &operator = (const Dog &obj);
	virtual ~Dog();
	void	makeSound(void) const;
	void setIdea(const std::string &str, const unsigned int i);
};

#endif