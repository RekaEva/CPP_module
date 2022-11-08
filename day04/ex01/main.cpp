/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:56:25 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 18:58:34 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

// int main()
// {
// 	std::cout << ">>>>>>>>>>TEST_1<<<<<<<<<<" << std::endl;
// 	const Animal*	j = new Dog();
// 	const Animal*	i = new Cat();
// 	delete j;
// 	delete i;
// {	
// 	std::cout << "\n>>>>>>>>>>TEST_2<<<<<<<<<<" << std::endl;
// 	Cat tom;
// 	Cat kim(tom);
	
// 	std::cout << "\n>>>>>>>>>>TEST_3<<<<<<<<<<" << std::endl;
// 	Cat sem;
// 	sem = tom;
// }
// 	std::cout << "\n>>>>>>>>>>TEST_4<<<<<<<<<<" << std::endl;
// 	Animal* array[4];
// 	for (int i = 0; i < 4; ++i) {
// 		if (i < 2)
// 			array[i] = new Cat();
// 		else
// 			array[i] = new Dog();
// 	}
// 	for (int i = 0; i < 4; ++i) {
// 		delete array[i];
// 	}
// 	return 0; 
// }

int main(void)
{
	Cat	alice;
	alice.setIdea("duplicate me\n", 1);
	alice.makeSound();

	Cat	*barsik = new Cat(alice);
	barsik->makeSound();
	// std::cout << barsik->getIdea(1) <<std::endl;
	delete barsik;
	std::cout << "---- barsik deleted ----" <<std::endl;

	Dog basic;
	basic.setIdea("duplicate me\n", 1);
	{
		Dog rex = basic;
		rex.makeSound();
		// std::cout << rex.getIdea(1) <<std::endl;
	}
	std::cout << "---- rex out of scope ----" <<std::endl;
	std::cout << "---- reference polymorphism ----" <<std::endl;

	Animal &rA = alice;
	Animal &rB = basic;

	rA.makeSound();
	rB.makeSound();

	std::cout << "---- pointer polymorphism ----" <<std::endl;
	Animal *pCat = new Cat();
	Animal *pDog = new Dog();
	pCat->makeSound();
	pDog->makeSound();
	std::cout << "---- deleted Animal pointer. view leaks----" <<std::endl;
	delete pCat;
	delete pDog;
	std::cout << "---- next delete automatic variable----" <<std::endl;
}