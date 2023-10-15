/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:35 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/15 18:56:34 by tmoumni          ###   ########.fr       */
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
		bool operator== (const Point & copy);
		Fixed area(Point & b, Point & c);
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif