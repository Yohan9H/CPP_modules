/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:52:01 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/07 08:43:23 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*p_zombie = newZombie("Fred");

	randomChump("Jack");
	randomChump("Paul");
	p_zombie->announce();
	randomChump("Jean");
	delete p_zombie;
}
