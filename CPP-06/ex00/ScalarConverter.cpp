/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:02:21 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/28 15:20:36 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructeur called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
	std::cout << "Copy constructeur called" << std::endl;
}


ScalarConverter::~ScalarConverter()
{
	std::cout << "Default destructeur called" << std::endl;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &src)
{
	(void)src;
	std::cout << "Default destructeur called" << std::endl;
}


void	convert_char(std::string str)
{
	std::cout << "char : ";

	long long value = std::atoll(str.c_str());
	if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		std::cout << "impossible" << std::endl;
	else if (!std::isdigit(str[0]) && str.length() == 1)
		std::cout << "'" << static_cast<char>(str[0]) << "'" << std::endl;
	else if (!std::isdigit(str[0]) && str.length() > 1)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(value))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
}

void	convert_int(std::string str)
{
	std::cout << "int : ";

	long long value = std::atoll(str.c_str());
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else if (!std::isdigit(str[0]) && str.length() > 1)
		std::cout << "impossible" << std::endl;
	else if (str.length() == 1 && !isdigit(str[0]))
		std::cout << static_cast<int>(str[0]) << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;
}

void	convert_float(std::string str)
{
	std::cout << "float : ";

	double value = std::atof(str.c_str());
	if (str.length() == 1 && !isdigit(str[0]))
		std::cout << static_cast<float>(str[0]) << ".0";
	else if (std::isfinite(value) && std::floor(value) == value && value < 1000000)
		std::cout << static_cast<float>(value) << ".0";
	else
		std::cout << static_cast<float>(value);
	std::cout << "f" << std::endl;
}

void	convert_double(std::string str)
{
	std::cout << "double : ";

	double value = std::atof(str.c_str());
	if (str.length() == 1 && !isdigit(str[0]))
		std::cout << static_cast<double>(str[0]) << ".0" << std::endl;
	else if (std::isfinite(value) && std::floor(value) == value && value < 1000000)
		std::cout << static_cast<double>(value) << ".0" << std::endl;
	else
		std::cout << static_cast<double>(value) << std::endl;
}

void	ScalarConverter::convert(std::string input)
{
	std::string str = input;

	convert_char(str);
	convert_int(str);
	convert_float(str);
	convert_double(str);
}