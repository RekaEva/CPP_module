/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:44:38 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/02 16:52:55 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream> 

class Fixed
{
	private:
		int num_val; // a
		static const int fract_val = 8;
	public:
		Fixed();
		Fixed &operator=(const Fixed &obj); // c = &b = &a
		Fixed(const Fixed &num_val); // b = &a;
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};


#endif