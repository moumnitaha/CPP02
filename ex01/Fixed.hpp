/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:26 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/23 15:04:10 by tmoumni          ###   ########.fr       */
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
		int _fractional_bits;
		static const int fixed_tmp;
	public:
		Fixed();
		Fixed(const Fixed &Fxd);
		Fixed(const int a);
		Fixed(const float f);
		Fixed & operator = (const Fixed &Fxd);
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif