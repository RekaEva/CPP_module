/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:36:03 by cpollito          #+#    #+#             */
/*   Updated: 2022/11/03 17:49:15 by cpollito         ###   ########.fr       */
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
		Fixed(const Fixed &num_val); 
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void ) const;
		int toInt(void) const;

		Fixed &operator=(const Fixed &obj); 
		bool	operator > (const Fixed &val) const;
		bool	operator <= (const Fixed &val) const;
		bool	operator < (const Fixed &val) const;
		bool	operator >= (const Fixed &val) const;
		bool	operator == (const Fixed &val) const;
		bool	operator != (const Fixed &val) const;

		Fixed	operator + (const Fixed &val) const;
		Fixed	operator - (const Fixed &val) const;
		Fixed	operator * (const Fixed &val) const;
		Fixed	operator / (const Fixed &val) const;
		
		Fixed&	operator ++ ();
		Fixed&	operator -- ();
		Fixed	operator ++ ( int n );
		Fixed	operator -- ( int n );

		static Fixed&	min(Fixed &v1, Fixed &v2);
		static const Fixed&	min(const Fixed &v1, const Fixed &v2);
		static Fixed&	max(Fixed &v1, Fixed &v2);
		static const Fixed&	max(const Fixed &v1, const Fixed &v2);
};

std::ostream& operator<< (std::ostream &ostrm, const Fixed &val); 

#endif