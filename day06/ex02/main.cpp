/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:56:43 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/13 18:33:59 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>


Base *generate(void)
{
	int a;

	a = std::rand() % 3;
	if (!a )
		return new A;
	else if (a == 1)
		return new B;
	else 
		return new C;
}

void identify (Base *p)
{
	if (p == dynamic_cast<A *>(p))
		std::cout << "This is pointer to object class A" <<std::endl;
	else if (p == dynamic_cast<B *>(p))
		std::cout << "This is pointer to object class B" <<std::endl;
	else if (p == dynamic_cast<C *>(p))
		std::cout << "This is pointer to object class C" <<std::endl;
}

void identify(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "This is reference to object class A" <<std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "This is reference to object class B" <<std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "This is reference to object class C" <<std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
}

int main()
{
	Base *ptr;
	
	std::srand(std::time(nullptr)); 

	
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	
	return (0);
}