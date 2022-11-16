/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:18:17 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/16 15:55:33 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & source);
		~Fixed(void);
		Fixed &	operator=(Fixed const & rhs);
		Fixed(const int raw);
		Fixed(const float raw);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	protected:
	private:
		int	_raw;
		static const int	_bitSize = 8;
};

std::ostream & operator<<(std::ostream &flow, const Fixed &fixed);
int	ft_pow(int val, int exp);

# endif
