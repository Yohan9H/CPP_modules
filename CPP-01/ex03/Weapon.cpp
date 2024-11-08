/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:30:59 by yohan.h           #+#    #+#             */
/*   Updated: 2024/11/08 17:41:15 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	_name = name;
}

Weapon::~Weapon() {}


std::string	Weapon::getType() const
{
	return (_name);
}

void	Weapon::setType(std::string type)
{
	_name = type;
}