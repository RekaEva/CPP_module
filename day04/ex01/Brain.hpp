/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:37:32 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/08 18:39:03 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream> 

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &obj);
	Brain& operator= (const Brain &val);
	~Brain();
	const std::string& getIdea(const unsigned int i) const;
	void setIdea(const std::string &str, const unsigned int i);
};
#endif