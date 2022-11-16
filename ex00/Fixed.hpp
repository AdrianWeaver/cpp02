/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aweaver <aweaver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:18:17 by aweaver           #+#    #+#             */
/*   Updated: 2022/11/16 16:06:55 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & source);
		~Fixed(void);
		Fixed &	operator=(Fixed const & rhs);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
	protected:
	private:
		int	_raw;
		static const int	_bitSize = 8;
};

# endif
