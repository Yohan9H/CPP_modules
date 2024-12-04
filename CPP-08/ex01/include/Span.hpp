/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:11:29 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/04 15:31:20 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <exception>
#include <algorithm>
#include <vector>
#include <iterator>
#include <stdexcept>
#include <cmath>
#include <ctime>
#include <numeric>

class Span
{
	private:
		std::vector<long long>	_vec;
		unsigned long			_reserve;
		unsigned long			_size;
		Span();

	public:
		Span(const Span &src);
		Span(unsigned long N);
		~Span();

		Span		&operator=(const Span &src);

		void		addNumber(long long n);
		void		addNumber(std::vector<long long>::iterator first, std::vector<long long>::iterator last);
		long long	shortestSpan();
		long long	longestSpan();
		void		print_vec();
};
