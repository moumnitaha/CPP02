/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:23 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/23 15:02:43 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fractional_bits(8) 
{
    std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const Fixed &Fxd)
{
	std::cout << "Copy constructor called" << std::endl;
    this->operator=(Fxd);
}

Fixed &Fixed::operator=(const Fixed &Fxd)
{
	std::cout << "Copy assignment operator called" << std::endl;
    this->_fractional_bits = Fxd.getRawBits();
    return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fractional_bits);
}

void Fixed::setRawBits(int const raw)
{
	_fractional_bits = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
