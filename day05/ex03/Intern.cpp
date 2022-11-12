/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:59:52 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 19:13:34 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{}

Intern::Intern(const Intern& val)
{
	(void)val;
}

Intern::~Intern()
{}

Intern& Intern::operator= (const Intern& val)
{
	(void)val;
	return *this;
}

Form* newShrabberyForm(const std::string &target){
	return new ShrubberyCreationForm(target);}

Form* newRobotomyForm(const std::string &target){
	return new RobotomyRequestForm(target);}
	
Form* newPPardonForm(const std::string &target){
	return new PresidentialPardonForm(target);}


Form *Intern::makeForm(const std::string& formName, const std::string& target)
{
	typedef Form* (*ptr_func)(const std::string& _target); // описание нового типа указатель на функцию (возвращ указатель на форму)
	ptr_func Array[] = {&newShrabberyForm, &newRobotomyForm, &newPPardonForm};
	
	const std::string names[] = {"ShrabberyForm", "RobotomyForm", "PresidentialPardonForm"};

	int i = 0;
    
    while (i < 3 && formName != names[i])
	{
        ++i;
    }
	
    if (i == 3)
		throw NoForm();
	return Array[i](target);
}

const char* Intern::NoForm::what() const  throw()
{
	return "Error! The intern knows nothing about this form";
}