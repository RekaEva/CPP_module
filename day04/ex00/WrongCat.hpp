/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:39:16 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 14:52:49 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat :  public WrongAnimal
{
protected:
	/* data */
public:
	WrongCat();
	WrongCat(const WrongCat &new_obj); // Copy constructor
	WrongCat &operator = (const WrongCat &obj); //  Copy assignment operator
	~WrongCat();
	void makeSound(void) const;
};

#endif