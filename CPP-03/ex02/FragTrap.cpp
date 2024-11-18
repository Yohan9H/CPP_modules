/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:18:32 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/18 11:33:40 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ********************** Constructeurs **********************

FragTrap::FragTrap()
	: ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Default 'derivative Frag' constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Name 'derivative Frag' constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
	: ClapTrap(src)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Copy 'derivative Frag' constructor called" << std::endl;
}


// ********************** Destructeur **********************

FragTrap::~FragTrap()
{
	std::cout << "Destructor 'derivative Frag' called" << std::endl;
}

// ********************** Surcharge **********************

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		ClapTrap::operator=(src);
	}
	return *this; 
}


// ********************** Methods **********************

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << "ask high fives!" << std::endl;
}