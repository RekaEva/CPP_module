/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:45:27 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/16 13:16:28 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int toFind;
    std::cout << "Input number: ";
    std::cin >> toFind;

	std::vector<int>::const_iterator	cit;

	std::cout << "----VECTOR-----" << std::endl;
    std::vector<int> vect;
    for (int i = 0; i < 5; i++)
    {
        vect.push_back(i);
        std::cout << i << " ";
    }
	try{
		 cit = easyfind(vect, toFind);
		 std::cout << "Find in vector: " << *cit << std::endl;
	}
	catch(const std::exception& e){
		std::cerr  <<e.what() <<std::endl;
	}
    std::cout << std::endl;
	
	std::cout << "----VECTOR_empty-----" << std::endl;
	std::vector<int> vect2;
	try{
		 cit = easyfind(vect2, toFind);
		 std::cout << "Find in vector: " << *cit << std::endl;
	}
	catch(const std::exception& e){
		std::cerr  <<e.what() <<std::endl;
	}
    std::cout << std::endl;

	std::cout << "------LIST-------" << std::endl;
	std::list<int>::const_iterator	citt;
    std::list<int> lst;
    for (int i = 0; i < 5; i++)
    {
        lst.push_back(i);
        std::cout << i << " ";
    }
    std::cout << std::endl;
	try{
		 citt = easyfind(lst, toFind);
		 std::cout << "Find in list: " << *citt << std::endl;}
	catch(const std::exception& e){
		std::cerr <<e.what() <<std::endl;
	}
    std::cout << std::endl;
	return 0;
}