/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:31:20 by yohurteb          #+#    #+#             */
/*   Updated: 2025/02/04 11:21:52 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	rpn(std::string str)
{
	std::string buffer = "0123456789*-+/ ";

	std::deque<int> stack;
	std::stringstream iss(str);
	std::string rcp;

	while (iss >> rcp)
	{
		if (buffer.find(rcp) == std::string::npos)
		{
			std::cerr << "Error: not valid char" << std::endl;
			return;
		}
		if (std::isdigit(rcp.at(0)))
		{
			stack.push_back(std::atoi(rcp.c_str()));
		}
		else if (rcp == "*" || rcp == "-" || rcp == "+" || rcp == "/")
		{
			if (stack.size() < 2)
			{
				std::cerr << "Error: not valid input" << std::endl;
				return;
			}
			else
			{
				int nb2 = stack.back();
				stack.pop_back();
				int nb1 = stack.back();
				stack.pop_back();

				if (rcp == "*")
					stack.push_back(nb1 * nb2);
				else if (rcp == "-")
					stack.push_back(nb1 - nb2);
				else if (rcp == "+")
					stack.push_back(nb1 + nb2);
				else if (rcp == "/")
				{
					if (nb1 == 0 || nb2 == 0)
					{
						std::cerr << "Error: div by 0" << std::endl;
						return;
					}
					stack.push_back(nb1 / nb2);
				}
			}
		}
	}
	std::cout << stack.back() << std::endl;
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rpn(av[1]);
	}
	else
	{
		std::cerr << "Error: need one param" << std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
