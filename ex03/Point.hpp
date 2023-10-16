/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:35 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/16 12:26:59 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
# define _POINT_HPP_

#include "Fixed.hpp"

class Point {
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		Point(float const x, float const y);
		Point(const Point & copy);
		Point & operator= (const Point & copy);
		bool operator== (const Point & copy) const;
		Fixed getX(void) const;
		Fixed getY(void) const;
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

Fixed area(const Point & a, const Point & b, const Point & c);

#endif