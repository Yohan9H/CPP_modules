/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:53:06 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/18 08:37:05 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ********************** Constructeurs **********************

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "Default 'derivative' constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "Name 'derivative' constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
	: ClapTrap(src)
{
	std::cout << "Copy 'derivative' constructor called" << std::endl;
}


// ********************** Destructeur **********************

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor 'derivative' called" << std::endl;
}

// ********************** Surcharge **********************

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_hit_points = src._hit_points;
		this->_energy_points = src._energy_points;
		this->_attack_damage = src._attack_damage;
	}
	return *this; 
}


// ********************** Methods **********************

