/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 08:25:35 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/29 09:14:50 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Default constructeur called" << std::endl;
}

Serializer::Serializer(const Serializer &src)
{
	*this = src;
	std::cout << "Copy constructeur called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Default destructeur called" << std::endl;
}

Serializer	&Serializer::operator=(const Serializer &src)
{
	(void)src;
	std::cout << "Default destructeur called" << std::endl;
	return *this;
}


uintptr_t	Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}