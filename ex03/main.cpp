/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:42:20 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/16 16:45:55 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point const a(1, 10);
    Point const b(5, 2);
    Point const c(-3, 1.75f);
    // Point const point(101, 6);
    // Point  point(1, 10);
    Point  point(3.65f, 3.5f);

    Fixed totoalArea;

    if (a == b || b == c || a == c || !area(a, b, c))
    {
        std::cout << "INVALID TRIANGLE COORDINATES ! " << std::endl;
        return 0;
    }

    totoalArea = area(point, a, b) + area(point, b, c) + area(point, c, a);
    
    std::cout << std::endl << "Area of the ABC triangle: " << area(a, b, c) << std::endl << std::endl;
    
    std::cout << "Area of PAB: " << area(point, a, b) << std::endl;
    std::cout << "Area of PCB: " << area(point, c, b) << std::endl;
    std::cout << "Area of PAC: " << area(point, a, c) << std::endl;
    std::cout << "TOTAL Area: " << totoalArea << std::endl;
    std::cout << std::endl << (bsp(a, b, c, point) ? "Inside" : "Outside") << std::endl << std::endl;
    return 0;
}
