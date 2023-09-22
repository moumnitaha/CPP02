/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:26 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/22 13:22:14 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int fixed;
        static const int fixed_tmp;
    public:
        Fixed();
        Fixed(const Fixed &Fxd);
        Fixed & operator = (const Fixed &Fxd);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

#endif