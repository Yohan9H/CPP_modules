/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:09:32 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/16 11:53:15 by yohurteb         ###   ########.fr       */
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
		
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		Fixed	&operator+(const Fixed &other);
		Fixed	&operator-(const Fixed &other);
		Fixed	&operator*(const Fixed &other);
		Fixed	&operator/(const Fixed &other);

		Fixed	&operator--();
		Fixed	operator--(int);
		Fixed	&operator++();
		Fixed	operator++(int);

		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);


		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &myClass);