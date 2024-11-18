/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:11:47 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/18 11:41:09 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ********************** Constructeurs **********************

ClapTrap::ClapTrap()
	: _name("unknown"),
	  _hit_points(100),
	  _energy_points(50),
	  _attack_damage(20)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name),
	  _hit_points(100),
	  _energy_points(50),
	  _attack_damage(20)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
	: _name(src._name),
	  _hit_points(src._hit_points),
	  _energy_points(src._energy_points),
	  _attack_damage(src._attack_damage)
{
	std::cout << "Copy constructor called" << std::endl;
}


// ********************** Destructeur **********************

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


// ********************** Surcharge **********************

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
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

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points != 0 && this->_hit_points != 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "TrapClap " << this->_name << " take " << amount << " damage!" << std::endl; 
	if (amount >= this->_hit_points)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points != 0 && this->_hit_points != 0)
	{
		std::cout << "TrapClap " << this->_name << " repaired itself!" << std::endl;
		this->_energy_points += amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't repaired." << std::endl;
}

std::string		ClapTrap::getName()
{
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints()
{
	return this->_hit_points;
}

unsigned int	ClapTrap::getEnergyPoints()
{
	return this->_energy_points;
}

unsigned int	ClapTrap::getAttackDamage()
{
	return this->_attack_damage;
}