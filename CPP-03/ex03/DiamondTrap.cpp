/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:51:00 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/18 15:54:08 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap(),
	  ScavTrap(),
	  FragTrap()
{
	std::cout << "Default 'derivative Diamond' constructor called" << std::endl;
	this->_name = "DefaultName Diamond";
	this->~_hit_points = FragTrap::getHitPoints();

}

