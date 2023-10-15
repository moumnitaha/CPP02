/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:38 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/15 18:10:21 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <math.h>

Point::Point() : _x(0), _y(0) {
	std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const Point & copy) {
	this->operator=(copy);
	std::cout << "Point copy constructor called" << std::endl;
}

Point::Point(float x, float y) : _x(x), _y(y) {
	std::cout << "Point parameterized constructor called" << std::endl;
}

Point & Point::operator=(const Point & copy) {
	_x = copy._x;
	_y = copy._y;
	std::cout << "Point copy assignment operator called" << std::endl;
	return (*this);
}

bool Point::operator==(const Point & copy) {
	return (this->_x == copy._x && this->_y == copy._y);
}

Fixed Point::area(Point & b, Point & c) {
	return (abs(((this->_x * (b._y - c._y) + b._x * (c._y - this->_y) + c._x * (this->_y - b._y)) / 2).toFloat()));
}

Point::~Point() {
	std::cout << "Point destructor called" << std::endl;
}