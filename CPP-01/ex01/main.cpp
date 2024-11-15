/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:52:01 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/14 11:01:16 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*p_zombie = zombieHorde(10, "Fred");

	for (int i = 0; i < 9; i++)
		p_zombie[i].announce();
	delete[] p_zombie;
}
