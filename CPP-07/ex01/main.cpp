/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 10:40:58 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/01 11:21:22 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	std::string tab[] =
	{
		"salut",
		"mon",
		"pote"
	};


	std::cout << "tab std::string :" << std::endl;
	for (size_t	i = 0; i < 3; i++)
		std::cout << tab[i] << std::endl;
	std::cout << "\n";

	iter(tab, 3, display_i<std::string>);


	std::cout << "\n--------------\n" << std::endl;


	int		tab_int[] = {0, 1, 2, 3, 4, 5};


	std::cout << "tab int :" << std::endl;
	for (size_t	i = 0; i < 3; i++)
		std::cout << tab_int[i] << std::endl;
	std::cout << "\n";

	iter(tab_int, 3, display_i<int>);
}