/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:20 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/05 18:51:20 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point  &a, Point  &b, Point  &c, Point  &point) {
    return (point.area(a, b) + point.area(b, c) + point.area(c, a)  == a.area(b, c));
}

int main( void )
{
    Point  a(20, 0);
    Point  b(10, 10);
    Point  c(30, 0);
    Point  point(15, 4.5f);
    // std::cout << "Area: " << a.area(b, c) << std::endl;
    // std::cout << "Area: " << b.area(c, a) << std::endl;
    // std::cout << "Area: " << c.area(a, b) << std::endl;
    // std::cout << "P Area: " << point.area(a, b) << std::endl;
    if (bsp(a, b, c, point))
        std::cout << std::endl << "Inside" << std::endl << std::endl;
    else
        std::cout << std::endl << "Outside" << std::endl << std::endl ;
    return 0;
}
