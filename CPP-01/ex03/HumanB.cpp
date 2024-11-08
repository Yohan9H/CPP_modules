/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:47:57 by yohan.h           #+#    #+#             */
/*   Updated: 2024/11/08 17:41:52 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon ? *weapon : Weapon("hands")) {}

HumanB::~HumanB() {}


void	HumanB::attack()
{
	std::cout << _name << " attack with their " << _weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}