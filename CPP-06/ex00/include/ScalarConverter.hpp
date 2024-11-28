/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:02:26 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/28 15:18:09 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);

		ScalarConverter	&operator=(const ScalarConverter &src);

	public:
		~ScalarConverter();
		static void		convert(std::string input);
};