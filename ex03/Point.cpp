/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:38 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/16 14:40:00 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <math.h>

Point::Point() : _x(0), _y(0) {
	// std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const Point & copy) : _x(copy._x), _y(copy._y) {
	// this->operator=(copy);
	// std::cout << "Point copy constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
	// std::cout << "Point parameterized constructor called" << std::endl;
}

Point & Point::operator=(const Point & copy) {
	(Fixed)_x = copy._x;
	(Fixed)_y = copy._y;
	std::cout << "Point copy assignment operator called" << std::endl;
	return (*this);
}

bool Point::operator==(const Point & copy) const {
	return ((Fixed)this->_x == copy._x && (Fixed)this->_y == copy._y);
}

Fixed Point::getX(void) const {
	return this->_x;
}

Fixed Point::getY(void) const {
	return _y;
}

Point::~Point() {
	// std::cout << "Point destructor called" << std::endl;
}

Fixed area(const Point & a, const Point & b, const Point & c)
{
	return abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())).toFloat()) / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (!area(point, a, b) || !area(point, b, c) || !area(point, c, a))
		return false;
	Fixed totalArea = area(point, a, b) + area(point, b, c) + area(point, c, a);
    return (totalArea == area(a, b, c));
}
