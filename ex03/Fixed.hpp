/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:18:17 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/16 18:31:20 by aweaver          ###   ########.fr       */
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

		// Operator overloads
		// Comparisons
		bool operator<(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator>(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);
		// Arithmetics
		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);
		// Increment
		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);

		// Getters and setters
		const int& getRawBits(void) const;
		void	setRawBits(int const raw);

		// Conversion functions
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed & min(Fixed& fix1, Fixed& fix2);
		static const Fixed & min(Fixed const& fix1, Fixed const& fix2);
		static Fixed & max(Fixed& fix1, Fixed& fix2);
		static const Fixed & max(Fixed const& fix1, Fixed const& fix2);
	protected:
	private:
		int	_raw;
		static const int	_bitSize = 8;
};

std::ostream & operator<<(std::ostream &flow, const Fixed &fixed);
int	ft_pow(int val, int exp);

# endif
