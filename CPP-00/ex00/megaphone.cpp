/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:42:28 by yohurteb          #+#    #+#             */
/*   Updated: 2024/10/29 15:20:43 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int		main(int ac, char **av)
{
	int		i = 1;
	int		x = 0;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i])
	{
		while (av[i][x])
		{
			if (av[i][x] >= 'a' && av[i][x] <= 'z')
				av[i][x] -= 32; 
			x++;
		}
		x = 0;
		std::cout << av[i];
		i++;
	}
	std::cout << "\n";
}
