/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:23:02 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/12 15:58:01 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include "string"

class RobotomyRequestForm : public Form
{
private:
	std::string	target;
public:
	RobotomyRequestForm(const std::string _target);
	RobotomyRequestForm(const RobotomyRequestForm& val);
	virtual ~RobotomyRequestForm();
	
	RobotomyRequestForm& operator= (const RobotomyRequestForm& val);
	
	virtual void	execute(Bureaucrat const & executor) const;
	virtual std::ostream&	print(std::ostream &out) const;
};

#endif