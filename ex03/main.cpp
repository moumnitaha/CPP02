/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:20 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/12 18:56:17 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point  &a, Point  &b, Point  &c, Point  &point) {
    if (point == a || point == b || point == c)
        return (false);
    if (!point.area(a, b).toFloat() || !point.area(b, c).toFloat() || !point.area(c, a).toFloat())
        return false;
    return (point.area(a, b) + point.area(b, c) + point.area(c, a)  == a.area(b, c));
}

int main( void )
{
    Point  a(2, 2);
    Point  b(12, 4);
    Point  c(3, 7);
    Point  point(1, 1);

    if (a == b || b == c || !a.area(b, c).toFloat()) {
        std::cout << "INVALID TRIANGLE" << std::endl;
        return 0;
    }

    std::cout << "Area ABC: " << a.area(b, c) << std::endl;
    std::cout << "Area BCA: " << b.area(c, a) << std::endl;
    std::cout << "Area CAB: " << c.area(a, b) << std::endl;
    std::cout << "TOTAL Area: " << a.area(c, b) + b.area(a, c) + c.area(b, a) << std::endl << std::endl;

    std::cout << "P Area PAB: " << point.area(a, b) << std::endl;
    std::cout << "P Area PCB: " << point.area(c, b) << std::endl;
    std::cout << "P Area PAC: " << point.area(a, c) << std::endl;
    std::cout << "TOTAL Area: " << point.area(a, b) + point.area(b, c) + point.area(c, a) << std::endl;
    if (bsp(a, b, c, point))
        std::cout << std::endl << "Inside" << std::endl << std::endl;
    else
        std::cout << std::endl << "Outside" << std::endl << std::endl ;
    return 0;
}
