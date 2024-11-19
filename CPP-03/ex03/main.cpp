/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:11:49 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/19 09:42:21 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{

	DiamondTrap	Diamond1("Diamond_1");
	DiamondTrap	Diamond2("Diamond_2");
	DiamondTrap	Diamond3;
	DiamondTrap	copy = Diamond1;

	std::cout << "-----------------------" << std::endl;

	Diamond1.whoAmI();
	Diamond2.whoAmI();
	Diamond3.whoAmI();
	copy.whoAmI();

	std::cout << "-----------------------" << std::endl;
	
	Diamond1.guardGate();
	Diamond1.highFivesGuys();
	return (0);
}