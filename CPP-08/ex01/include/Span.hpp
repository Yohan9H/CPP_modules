/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:11:29 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/03 07:33:18 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <exception>
#include <algorithm>
#include <vector>
#include <stdexcept>

class Span
{
	private:
		std::vector<long long>	_vec;
		unsigned int			_size;

	public:
		Span();
		Span(const Span &src);
		Span(unsigned int N);
		~Span();

		Span			&operator=(const Span &src);

		void			addNumber(long long n);
		void			addNumber(long long first, long long last);
		long long		shortestSpan();
		long long		longestSpan();
};

class ErrorSize : public std::exception
{
	public:
		const char *what() const throw();
};