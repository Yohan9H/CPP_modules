/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:09:34 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/15 16:20:40 by yohurteb         ###   ########.fr       */
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
	std::cout << "Default constructor called" << std::endl;
}


// ---------------------------- Surcharge ----------------------------
Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called '='" << std::endl;
	if (this != &other)
		this->_nb = other.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &myClass)
{

// ---------------------------- Methods ----------------------------
int	Fixed::getRawBits() const 
{
	std::cout << "Copy assignment operator called 'Raw'" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}

float	Fixed::toFloat() const
{
	return (this->_nb / (1 << 8));
}

int		Fixed::toInt() const
{
	return (this->_nb >> this->_bits_frct);
}
	return (out << myClass.toFloat());
}


// ---------------------------- Methods ----------------------------
int	Fixed::getRawBits() const 
{
	std::cout << "Copy assignment operator called 'Raw'" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nb = raw;
}

float	Fixed::toFloat() const
{
	return (this->_nb / (1 << 8));
}

int		Fixed::toInt() const
{
	return (this->_nb >> this->_bits_frct);
}
