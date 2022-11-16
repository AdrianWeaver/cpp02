/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:18:18 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/16 16:06:57 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0)
{
	std::cerr << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & source)
{
	std::cerr << "Copy constructor called" << std::endl;
	*this = source;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cerr << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	else
		this->_raw = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cerr << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cerr << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
	return ;
}
