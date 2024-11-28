/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:02:23 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/28 15:16:30 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string str = av[1];
		ScalarConverter::convert(str);
	}
	else
	{
		std::cerr << "ERROR *need one arg*" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}