/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 08:50:33 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/29 09:14:08 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data		objet;
	uintptr_t	ptr_entier;

	objet.i = 3;

	std::cout << "Value data before : " << objet.i << std::endl;

	ptr_entier = Serializer::serialize(&objet);
	std::cout << ptr_entier << std::endl;

	Data *ptr = Serializer::deserialize(ptr_entier);
	std::cout << "Value data after : " << ptr->i << std::endl;
}