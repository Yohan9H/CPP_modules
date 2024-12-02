/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:11:29 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/02 17:18:55 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <exception>
#include <algorithm>
#include <vector>

class Span
{
	private:
		std::vector<unsigned int>	vec;

	public:
		Span();
		Span(const Span &src);
		Span(unsigned int N);
		~Span();

		Span	&operator=(const Span &src);

		void	addNumber(); //Si N existe deja dans vec, jete une execption ???
		
};