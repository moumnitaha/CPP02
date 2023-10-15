/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:20 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/15 16:25:53 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point  &a, Point  &b, Point  &c, Point  &point) {
    if (point == a || point == b || point == c)
        return (false);
    if (!point.area(a, b).toFloat() || !point.area(b, c).toFloat() || !point.area(c, a).toFloat())
        return false;
    return (point.area(a, b) + point.area(b, c) + point.area(c, a) == a.area(b, c));
}

int main( void )
{
    Point  a(1, 10);
    Point  b(5, 2);
    Point  c(-3, 1.75f);
    // Point  point(1, 6);
    // Point  point(3, 6);
    Point  point(3.65f, 3.5f);

    Fixed totoalArea;

    if (a == b || b == c || a == c || !a.area(b, c).toFloat()) {
        std::cout << "INVALID TRIANGLE" << std::endl;
        return 0;
    }

    totoalArea = point.area(a, b) + point.area(b, c) + point.area(c, a);
    
    std::cout << std::endl << "Area of the ABC triangle: " << a.area(b, c) << std::endl << std::endl;
    
    std::cout << "Area of three triangles: " << std::endl;
    std::cout << "P Area PAB: " << point.area(a, b) << std::endl;
    std::cout << "P Area PCB: " << point.area(c, b) << std::endl;
    std::cout << "P Area PAC: " << point.area(a, c) << std::endl;
    std::cout << "TOTAL Area: " << totoalArea << std::endl;

    std::cout << std::endl << (bsp(a, b, c, point) ? "Inside" : "Outside") << std::endl << std::endl;
    return 0;
}
