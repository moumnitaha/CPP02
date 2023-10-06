/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:35 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/05 22:20:09 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
# define _POINT_HPP_

#include "Fixed.hpp"

class Point {
	private:
		Fixed _x;
		Fixed _y;
	public:
		Point();
		Point(Fixed x, Fixed y);
		Point(const Point & copy);
		Point & operator= (const Point & copy);
		bool operator== (const Point & copy);
		Fixed area(Point & b, Point & c);
		~Point();
};

#endif