/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:09:34 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/16 12:03:19 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ---------------------------- Constructeurs ----------------------------
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_nb = 0;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	_nb = a.getRawBits();
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb * (1 << 8);
}

Fixed::Fixed(const float nb) : _nb(roundf(nb * (1 << this->_bits_frct)))
{
	std::cout << "Float constructor called" << std::endl;
}


// ---------------------------- Destructeur ----------------------------
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


// ---------------------------- Surcharge ----------------------------
Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_nb = other._nb;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &myClass)
{
	return (out << myClass.toFloat());
}

bool	Fixed::operator>(const Fixed &other) const
{
	return this->_nb > other._nb;
}

bool	Fixed::operator<(const Fixed &other) const
{
	return this->_nb < other._nb;
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return this->_nb >= other._nb;
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return this->_nb <= other._nb;
}

bool	Fixed::operator==(const Fixed &other) const
{
	return this->_nb == other._nb;
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return this->_nb != other._nb;
}

Fixed	&Fixed::operator+(const Fixed &other)
{
	this->_nb += other._nb;
	return *this;
}

Fixed	&Fixed::operator-(const Fixed &other)
{
	this->_nb -= other._nb;
	return *this;
}

Fixed	&Fixed::operator*(const Fixed &other)
{
	this->_nb = roundf((float)(this->toFloat() * other.toFloat()) * (1 << this->_bits_frct));
	return *this;
}

Fixed	&Fixed::operator/(const Fixed &other)
{
	this->_nb = roundf((float)(this->toFloat() / other.toFloat()) * (1 << this->_bits_frct));
	return *this;
}

Fixed	&Fixed::operator--()
{
	this->_nb--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->_nb--;
	return tmp;
}

Fixed	&Fixed::operator++()
{
	this->_nb++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->_nb++;
	return tmp;
}

// ---------------------------- Methods ----------------------------
int	Fixed::getRawBits() const 
{
	std::cout << "Copy assignment operator called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->_nb / (1 << this->_bits_frct));
}

int		Fixed::toInt() const
{
	return (this->_nb >> this->_bits_frct);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}