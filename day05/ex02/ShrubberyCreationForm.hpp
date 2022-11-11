/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:23:07 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/11 19:24:51 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRY_CREATION_FORM_HPP
# define SHRUBBERRY_CREATION_FORM_HPP

# include "Form.hpp"
# include "string"

class ShrubberyCreationForm : public Form
{
private:
	const static int	constSignGrade = 145;
	const static int	constExecGrade = 137;
	std::string	target;
public:

	ShrubberyCreationForm(const std::string _name);
	ShrubberyCreationForm(const ShrubberyCreationForm &val);
	virtual ~ShrubberyCreationForm();
	
	ShrubberyCreationForm& operator= (const ShrubberyCreationForm& val);
	
	virtual void	execute(Bureaucrat const & executor) const;
	virtual std::ostream&	print(std::ostream &out) const;
};
#endif