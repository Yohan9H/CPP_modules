/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:51:00 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/19 09:37:23 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ********************** Constructeurs **********************

DiamondTrap::DiamondTrap()
	: ClapTrap(),
	  ScavTrap(),
	  FragTrap()
{
	std::cout << "Default 'derivative Diamond' constructor called" << std::endl;
	this->_name = "Default_Diamond";
	this->_hit_points = FragTrap::getHitPoints();
	this->_energy_points = ScavTrap::getEnergyPoints();
	this->_attack_damage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"),
	  ScavTrap(name),
	  FragTrap(name)
{
	std::cout << "Name 'derivative Diamond' constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = FragTrap::getHitPoints();
	this->_energy_points = ScavTrap::getEnergyPoints();
	this->_attack_damage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
	: ClapTrap(),
	  ScavTrap(),
	  FragTrap()
{
	std::cout << "Copy 'derivative Diamond' constructor called" << std::endl;
	this->_name = "Cpy_Diamond";
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
}


// ********************** Destructeur **********************

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor 'derivative Diamond' called" << std::endl;

}


// ********************** Surcharge **********************

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	return *this; 
}


// ********************** Methods **********************

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name : " << this->_name << " | ClapTrap name : " << ClapTrap::getName() << std::endl;
}
