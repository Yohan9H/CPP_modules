/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:11:49 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/18 11:49:52 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap	frag1("frag1");
	FragTrap	frag2("frag2");

	std::cout << "Life frag2 = " << frag2.getHitPoints() << std::endl;
	frag1.attack(frag2.getName());
	frag2.takeDamage(frag1.getAttackDamage());
	std::cout << "Life frag2 = " << frag2.getHitPoints() << std::endl;
	frag1.attack(frag2.getName());
	frag2.takeDamage(frag1.getAttackDamage());
	std::cout << "Life frag2 = " << frag2.getHitPoints() << std::endl;
	frag1.attack(frag2.getName());
	frag2.takeDamage(frag1.getAttackDamage());
	std::cout << "Life frag2 = " << frag2.getHitPoints() << std::endl;
	frag1.attack(frag2.getName());
	frag2.takeDamage(frag1.getAttackDamage());
	std::cout << "Life frag2 = " << frag2.getHitPoints() << std::endl;
	frag2.beRepaired(1);
	frag1.highFivesGuys();
}