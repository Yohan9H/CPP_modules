/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:09:32 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/16 09:06:15 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ostream>

class Fixed
{
	private:
		int 				_nb;
		static const int	_bits_frct = 8;

	public:
		Fixed();
		Fixed(const Fixed &cpy);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed();

		Fixed	&operator=(const Fixed &other);
		
		Fixed	&operator>(const Fixed &other);
		Fixed	&operator<(const Fixed &other);
		Fixed	&operator>=(const Fixed &other);
		Fixed	&operator<=(const Fixed &other);
		Fixed	&operator==(const Fixed &other);
		Fixed	&operator!=(const Fixed &other);
		Fixed	&operator+(const Fixed &other);
		Fixed	&operator-(const Fixed &other);
		Fixed	&operator*(const Fixed &other);
		Fixed	&operator/(const Fixed &other);
		Fixed	&operator/(const Fixed &other);

		Fixed	&operator--();
		Fixed	operator--(int);
		Fixed	&operator++();
		Fixed	operator++(int);

		Fixed	&

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &myClass);