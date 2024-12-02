/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:38:19 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/02 11:04:58 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T				*_tab;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		~Array();

		Array			&operator=(const Array &src);
		T				&operator[](unsigned int idx);

		unsigned int	size() const;
};

class InvalidIndex : public std::exception
{
	public:
		const char *what() const throw();
};

#include "../Array.tpp"