/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:56:25 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 15:58:33 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "---- wrong ---" << std::endl;
	WrongCat	wc;
	std::cout << "---- wrong cat meaw---" << std::endl;
	wc.makeSound();
	std::cout << "---- wrong cat meow again (haha) ---" << std::endl;
	WrongAnimal	*wa = new WrongCat();
	wa->makeSound();
	delete wa;
	return 0;
}

