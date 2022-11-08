/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:56:25 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 19:13:19 by cpollito         ###   ########.fr       */
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
	return 0; 
}

// int main(void)
// {
// 	Cat	alice;
// 	alice.setIdea("duplicate me\n", 1);
// 	alice.makeSound();

// 	Cat	*barsik = new Cat(alice);
// 	barsik->makeSound();
// 	// std::cout << barsik->getIdea(1) <<std::endl;
// 	delete barsik;
// 	std::cout << "---- barsik deleted ----" <<std::endl;

// 	Dog basic;
// 	basic.setIdea("duplicate me\n", 1);
// 	{
// 		Dog rex = basic;
// 		rex.makeSound();
// 		// std::cout << rex.getIdea(1) <<std::endl;
// 	}
// 	std::cout << "---- rex out of scope ----" <<std::endl;
// 	std::cout << "---- reference polymorphism ----" <<std::endl;

// 	Animal &rA = alice;
// 	Animal &rB = basic;

// 	rA.makeSound();
// 	rB.makeSound();

// 	std::cout << "---- pointer polymorphism ----" <<std::endl;
// 	Animal *pCat = new Cat();
// 	Animal *pDog = new Dog();
// 	pCat->makeSound();
// 	pDog->makeSound();
// 	std::cout << "---- deleted Animal pointer. view leaks----" <<std::endl;
// 	delete pCat;
// 	delete pDog;
// 	std::cout << "---- next delete automatic variable----" <<std::endl;
// }