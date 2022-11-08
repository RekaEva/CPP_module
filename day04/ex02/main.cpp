/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:56:25 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 19:38:00 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	delete j;
	delete i;
	
	Animal* array[4];
	for (int i = 0; i < 4; ++i) {
		if (i < 2)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	for (int i = 0; i < 4; ++i) {
		delete array[i];
	}
	Cat	one;
	Cat two(one);
	one.setIdea("I am cat\n", 1);
	one.makeSound();
	two.makeSound();

	Animal &rA = one;
	Animal &rB = two;

	rA.makeSound();
	rB.makeSound();

	// here is compilation erorr, variable someAnimal has the type 'Animal' which is an abstract class
	// Animal	aa;
	// Animal	*paa = new Animal;
	return 0; 
}