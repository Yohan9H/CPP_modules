/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:34:36 by yohan.h           #+#    #+#             */
/*   Updated: 2024/11/08 18:47:13 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name, Weapon *weapon = NULL);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon weapon);

	private:
		std::string _name;
		Weapon		_weapon;
};