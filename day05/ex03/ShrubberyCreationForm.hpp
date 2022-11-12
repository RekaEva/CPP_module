/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:23:07 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 16:34:04 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRY_CREATION_FORM_HPP
# define SHRUBBERRY_CREATION_FORM_HPP

# include "Form.hpp"
# include "string"

class ShrubberyCreationForm : public Form
{
private:
	const int	constSignGrade;
	const int	constExecGrade;
	std::string	target;
public:
	ShrubberyCreationForm(const std::string _name);
	ShrubberyCreationForm(const ShrubberyCreationForm &val);
	virtual ~ShrubberyCreationForm();
	
	ShrubberyCreationForm& operator= (const ShrubberyCreationForm &val);
	
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif