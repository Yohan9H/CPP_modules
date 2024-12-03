/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:11:34 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/03 07:37:25 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
	: _size(10)
{
	
	std::cout << "Default constructeur called" << std::endl;
}

Span::Span(const Span &src)
	: _size(src._size),
	  _vec(src._vec)
{
	std::cout << "Copy constructeur called" << std::endl;
}

Span::Span(unsigned int N)
	: _size(N)
{
	std::cout << "UInt constructeur called" << std::endl;
}

Span::~Span()
{
	std::cout << "Destructeur called" << std::endl;
}




Span		&Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->_vec = src._vec;
		this->_size = src._size;
	}
	return *this;
}




void		Span::addNumber(long long N)
{
	if (this->_vec.size() < this->_size)
		throw ErrorSize();
	this->_vec.push_back(N);
}

void		Span::addNumber(long long first, long long last)
{
	
}

long long	Span::shortestSpan()
{

}

long long	Span::longestSpan()
{
	
}




const	char*ErrorSize::what() const throw()
{
	return "** Error : exceeding size";
}