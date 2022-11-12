/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:22:52 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 18:05:40 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENT_PARDON_HPP
# define PRESIDENT_PARDON_HPP

# include "Form.hpp"
# include "string"

class PresidentialPardonForm : public Form
{
private:
	const static int	constSignGrade = 25;
	const static int	constExecGrade = 5;
	std::string	target;
public:
	PresidentialPardonForm(const std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm& val);
	virtual ~PresidentialPardonForm();
	
	PresidentialPardonForm& operator= (const PresidentialPardonForm& val);
	
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif