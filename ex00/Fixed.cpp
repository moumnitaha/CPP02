/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:23 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/22 13:44:42 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) 
{
    std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const Fixed &Fxd)
{
    this->fixed = Fxd.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &Fxd)
{
    this->fixed = Fxd.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed);
}

void Fixed::setRawBits(int const raw)
{
	fixed = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
