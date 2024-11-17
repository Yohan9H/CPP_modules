/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:11:49 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/17 10:35:26 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap robot1("robot1");
	ClapTrap robot2("robot2");

	robot1.attack("robot2");
	robot2.takeDamage(robot1.getAttackDamage());
	robot1.beRepaired(2);
	robot2.attack("robot1");
	robot1.takeDamage(robot2.getAttackDamage());
	robot2.beRepaired(5);
}