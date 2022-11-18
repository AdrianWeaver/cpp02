/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:03:24 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/18 12:03:35 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include <iostream>
#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		~Point(void);
		Point(Fixed x, Fixed y);
		Point(Point const &);
		Point & operator=(Point const &rhs);
		const Fixed & getX(void) const;
		const Fixed & getY(void) const;
	protected:
	private:
		Fixed _x;
		Fixed _y;
};

#endif
