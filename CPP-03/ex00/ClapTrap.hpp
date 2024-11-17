/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:11:45 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/17 10:33:20 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <string>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &src);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		unsigned int	getHitPoints();
		unsigned int	getEnergyPoints();
		unsigned int	getAttackDamage();
};