/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:23 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/24 14:28:04 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed() : _value(0) 
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
    this->_value = Fxd.getRawBits();
    return (*this);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int a) : _value(a << _fractional_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _value(roundf(f * (1 << _fractional_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (float)(1 << _fractional_bits));
}

int Fixed::toInt(void) const
{
    return (this->_value >> _fractional_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}
