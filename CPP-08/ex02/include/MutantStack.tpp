/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 08:30:43 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/05 15:14:09 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "Default constructeur called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src) : std::stack<T>(src)
{
	std::cout << "Copy constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor called" << std::endl;
}




template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &src)
{
	if (this != &src)
	{
		std::stack<T>::operator=(src);
	}
	return *this;
}




template <typename T>
typename MutantStack<T>::iterator 	MutantStack<T>::begin()
{
	return this->c.begin();
}



template <typename T>
typename MutantStack<T>::iterator 	MutantStack<T>::end()
{
	return this->c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return this->c.begin();
}



template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return this->c.end();
}
