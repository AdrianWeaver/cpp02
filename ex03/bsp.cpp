/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:33:49 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/18 12:15:52 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"
#include "Point.hpp"
#include "Fixed.hpp"

Fixed	ft_triangle_area(Point const a, Point const b, Point const c)
{
	float area;

	area = 0.5 * (a.getX().toFloat() * ((b.getY().toFloat()) - c.getY().toFloat()) +
			b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
			c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()));
	Fixed area_fixed(abs(area));
	return (area_fixed);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	triangle_area;
	Fixed	area1;
	Fixed	area2;
	Fixed	area3;

	triangle_area = ft_triangle_area(a, b, c);
	area1 = ft_triangle_area(point, b, c);
	area2 = ft_triangle_area(a, point, c);
	area3 = ft_triangle_area(a, b, point);

	//These can be uncommented to display the areas of the four triangles
	//std::cerr << triangle_area << std::endl;
	//std::cerr << area1 << std::endl;
	//std::cerr << area2 << std::endl;
	//std::cerr << area3 << std::endl;
	if (area1.getRawBits() == 0 || area2.getRawBits() == 0 || area3.getRawBits() == 0)
		return (0);
	else if (area1 + area2 + area3 <= triangle_area)
		return (1);
	return (0);
}
