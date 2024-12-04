/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:11:34 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/04 16:07:21 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
	: _reserve(0),
	  _size(0)
{
	std::cout << "Default constructeur called" << std::endl;
}

Span::Span(const Span &src)
	:  _vec(src._vec),
	   _reserve(src._reserve),
	   _size(src._size)
{
	std::cout << "Copy constructeur called" << std::endl;
}

Span::Span(unsigned long N)
	: _reserve(N),
	  _size(0)
{
	if (N < 0)
		throw std::length_error("** Error : 'N' not good");
	this->_vec.reserve(N);
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
		this->_reserve = src._reserve;
		this->_size = src._size;
	}
	return *this;
}




void		Span::addNumber(long long N)
{
	if (this->_size == this->_reserve)
		throw std::out_of_range("** Error : exceeding size **");

	this->_size++;
	this->_vec.push_back(N);
}

void		Span::addNumber(std::vector<long long>::iterator first, std::vector<long long>::iterator last)
{
	if (this->_size == this->_reserve)
		throw	std::out_of_range("** Error : exceeding size **");
	if (std::distance(first, last) + this->_size >= this->_reserve)
		throw	std::out_of_range("** Error : exceeding size **");

	this->_vec.insert(this->_vec.end(), first, last);
	this->_size += std::distance(first, last);
}

long long	Span::shortestSpan()
{
	if (_size <= 1)
		throw std::runtime_error("** Error : need more numbers **");
		
	std::vector<long long> sorted(this->_vec);
	std::sort(sorted.begin(), sorted.end());

	std::vector<long long> dif(sorted.size());
	std::adjacent_difference(sorted.begin(), sorted.end(), dif.begin());

	return	*std::min_element(dif.begin() + 1, dif.end());
}

long long	Span::longestSpan()
{
	if (_size <= 1)
		throw std::runtime_error("** Error : need more numbers **");

	long long min = *std::min_element(this->_vec.begin(), this->_vec.end());
    long long max = *std::max_element(this->_vec.begin(), this->_vec.end());

	return	max - min;
}

void		Span::print_vec()
{
	std::cout << "VEC : ";
	for (size_t i = 0; i < _vec.size(); i++)
	{
		std::cout << _vec[i] << " ";
	}
	std::cout << std::endl;
}
