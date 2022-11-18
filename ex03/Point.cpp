/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:03:23 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/18 12:18:54 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Point::Point(void) : _x(), _y()
{
	//std::cerr << "Default constructor called" << std::endl;
	return ;
}

Point::Point(Fixed x, Fixed y) : _x(x), _y(y)
{
	//std::cerr << "Default constructor called" << std::endl;
	return ;
}

Point::Point(Point const & source)
{
	//std::cerr << "Copy constructor called" << std::endl;
	*this = source;
	return ;
}

Point::~Point(void)
{
	//std::cerr << "Destructor called" << std::endl;
	return ;
}

Point & Point::operator=(Point const & rhs)
{
	//std::cerr << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	else
	{
		this->_x = rhs.getX();
		this->_y = rhs.getY();
	}
	return (*this);
}

const Fixed&	Point::getX(void) const
{
	return (this->_x);
}

const Fixed&	Point::getY(void) const
{
	return (this->_y);
}
