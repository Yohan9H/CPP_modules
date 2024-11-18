/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:11:49 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/18 10:30:40 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// ClapTrap robot1("Red");
	// ClapTrap robot2("Blue");
	ScavTrap enemy1("E_red");
	ScavTrap enemy2(enemy1);

	enemy1.attack("enemy2");
	enemy2.takeDamage(3);
	enemy1.beRepaired(3);
	enemy2.guardGate();
	
	// robot1.attack(robot2.getName());
	// robot2.takeDamage(robot1.getAttackDamage());
	// robot1.beRepaired(2);
	// robot2.attack(robot1.getName());
	// robot1.takeDamage(robot2.getAttackDamage());
	// robot2.beRepaired(5);
}