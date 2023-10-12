/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:26 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/12 18:41:52 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed &Fxd);
		Fixed(const int a);
		Fixed(const float f);
		Fixed &operator = (const Fixed &Fxd);
		Fixed  operator + (const Fixed &Fxd);
		Fixed  operator - (const Fixed &Fxd);
		Fixed  operator * (const Fixed &Fxd);
		Fixed  operator / (const Fixed &Fxd);

		bool  operator > (const Fixed &Fxd);
		bool  operator < (const Fixed &Fxd);
		bool  operator >= (const Fixed &Fxd);
		bool  operator <= (const Fixed &Fxd);
		bool  operator == (const Fixed &Fxd);
		bool  operator != (const Fixed &Fxd);

		Fixed &operator ++ (void);
		Fixed operator ++ (int);
		Fixed &operator -- (void);
		Fixed operator -- (int);

		static const Fixed &max( Fixed const &a,  Fixed const &b);
		static const Fixed &min( Fixed const &a,  Fixed const &b);

		static const Fixed &max( Fixed &a,  Fixed &b);
		static const Fixed &min( Fixed &a,  Fixed &b);

		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & FixedPoint);

#endif