/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 08:25:38 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/29 09:14:33 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <stdint.h>

typedef struct s_Data
{
	int i;
} Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();

		Serializer	&operator=(const Serializer &src);

	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};
