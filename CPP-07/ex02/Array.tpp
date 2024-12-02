/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:38:14 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/02 11:42:26 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Array.hpp"

template <typename T>
Array<T>::Array()
	: _tab(NULL),
	  _size(0)
{
	std::cout << "Default constructeur called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
	: _tab(new T[n]),
	  _size(n)
{
	std::cout << "Uint constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &src)
	: _tab(new T[src.size()]),
	  _size(src.size())
{
	for (size_t i = 0; i < src.size(); i++)
		this->_tab[i] = src._tab[i];
	std::cout << "Copy constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	if (this->_tab)
		delete []this->_tab;
	std::cout << "Destructeur called" << std::endl;
}



template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &src)
{
	this->_tab = new T[src.size()];
	return *this;
}

template <typename T>
T	&Array<T>::operator[](unsigned int idx)
{
	if (!(idx >= 0 && idx < this->size()))
		throw InvalidIndex();
	return this->_tab[idx];
}



template <typename T>
unsigned int	Array<T>::size() const
{
	return this->_size;
}



const char *InvalidIndex::what() const throw()
{
	return "** Invalid Index **";
}

