/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:38 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/15 22:53:15 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <math.h>

Point::Point() : _x(0), _y(0) {
	// std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const Point & copy) {
	this->operator=(copy);
	// std::cout << "Point copy constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
	// std::cout << "Point parameterized constructor called" << std::endl;
}

Point & Point::operator=(const Point & copy) {
	(Fixed)_x = copy._x;
	(Fixed)_y = copy._y;
	// std::cout << "Point copy assignment operator called" << std::endl;
	return (*this);
}

bool Point::operator==(const Point & copy) {
	return ((Fixed)this->_x == copy._x && (Fixed)this->_y == copy._y);
}

float Point::area(const Point & b, const Point & c) {
	return (abs(((this->getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - this->getY()) + c.getX() * (this->getY() - b.getY())) / 2)));
}

float Point::getX(void) const {
	return _x.toFloat();
}

float Point::getY(void) const {
	return _y.toFloat();
}

Point::~Point() {
	// std::cout << "Point destructor called" << std::endl;
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if ((Point)point == (Point)a || (Point)point == (Point)b || (Point)point == (Point)c)
        return (false);
    if (!((Point)point).area(a, b) || !((Point)point).area(b, c) || !((Point)point).area(c, a))
        return false;
    return (((Point)point).area(a, b) + ((Point)point).area(b, c) + ((Point)point).area(c, a) == ((Point)a).area(b, c));
}
