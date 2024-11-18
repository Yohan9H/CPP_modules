/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:53:06 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/18 11:22:37 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ********************** Constructeurs **********************

ScavTrap::ScavTrap()
	: ClapTrap()
{
	std::cout << "Default 'derivative Scav' constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	std::cout << "Name 'derivative Scav' constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
	: ClapTrap(src)
{
	std::cout << "Copy 'derivative Scav' constructor called" << std::endl;
}


// ********************** Destructeur **********************

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor 'derivative Scav' called" << std::endl;
}

// ********************** Surcharge **********************

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	return *this; 
}


// ********************** Methods **********************

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points != 0 && this->_hit_points != 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't attack." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is in mode Gatekeeper!" << std::endl;
}