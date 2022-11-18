/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:52:53 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/18 12:18:27 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include "bsp.hpp"

int main(void)
{
	const Point a(0, 0);
	const Point b(10, 0);
	const Point c(0, 10);
	// inside triangle
	{
		const Point challenger(1.0f,1.0f);

		if (bsp(a, b, c, challenger))
			std::cout << "Point is inside of the triangle" << std::endl;
		else
			std::cout << "Point is outside of the triangle" << std::endl;
	}
	// on the line
	{
		const Point challenger(0.0f,4.0f);
		if (bsp(a, b, c, challenger))
			std::cout << "Point is inside of the triangle" << std::endl;
		else
		std::cout << "Point is outside of the triangle" << std::endl;
	}
	// outside the triangle
	{
	const Point challenger(10.0f,6.0f);
	if (bsp(a, b, c, challenger))
		std::cout << "Point is inside of the triangle" << std::endl;
	else
		std::cout << "Point is outside of the triangle" << std::endl;
	}
}
