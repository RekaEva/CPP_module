/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:44:38 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/03 15:36:23 by cpollito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream> 
#include<cmath>

class Fixed
{
	private:
		int num_val;
		static const int fract_val = 8;
	public:
		Fixed();
		Fixed(const Fixed &num_val); // b = &a;
		Fixed &operator=(const Fixed &obj); // c = &b = &a
		Fixed(const int val); // 
		Fixed(const float val);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void ) const;
		int toInt(void) const;
};

std::ostream& operator<< (std::ostream &ostrm, const Fixed &val); // с помощью перегруженного
//оператора можно вывсети класс;


#endif