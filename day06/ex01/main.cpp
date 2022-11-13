/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:58:16 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/13 16:46:39 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string	name;
	int	age;
};

uintptr_t serialize( Data* ptr)
{
	uintptr_t	tmp;
	tmp  = reinterpret_cast<uintptr_t>(ptr);
	return tmp; 
}

Data* deserialize(uintptr_t raw)
{
	struct Data*	ptr = reinterpret_cast<Data* >(raw);
	return ptr;
}

int main(void)
{
	Data	data;
	
	data.name = "Vasya";
	data.age = 31;

	std::cout << "name: " <<data.name <<"\nage: " << data.age<<std::endl;

	uintptr_t Serial = serialize(&data);

	Data *Deserial;
	Deserial = deserialize(Serial);
	
	std::cout << "name: " <<Deserial->name <<"\nage: " << Deserial->age<<std::endl;

	return 0;
}

// Сериализация - процесс перевода структуры данных в битовую последовательность.
// reinterpret_cast, для приведения между несвязанными типами, такими как тип указателя и int