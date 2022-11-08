/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:37:29 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 18:04:05 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor Brain class" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default destructor Brain class" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Copy constructor Brain class" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
}

Brain& Brain::operator= (const Brain &val)
{
	if (this == &val)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = val.ideas[i];
	return *this;
}

void Brain::setIdea(const std::string &str, const unsigned int i)
{
	ideas[i % 100] = str; // 
}