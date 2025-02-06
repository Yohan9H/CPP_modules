/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:55:15 by yohurteb          #+#    #+#             */
/*   Updated: 2025/02/06 16:12:37 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	FordJohnsonDeq(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
	
}

void	FordJohnsonVec(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	
}

template <typename T1>
T1	ChangeAvtoArray(char **av)
{
	T1		array;
	int		val_l;
	char	*ptr;

	for (int i = 1; av[i]; i++)
	{
		if (!*av[i])
			throw(1);
		val = strtol(av[i], &ptr, 10);
		if (*ptr || val < 0)
			throw(1);
		array.push_back(val);
	}
	return array;
}

int	main(int ac, char **av)
{
	clock_t timeVec;
	clock_t	timeDeq;

	if (ac < 2)
	{
		std::cerr << "Error: Not enaugh numbers" << std::endl;
		return EXIT_FAILURE;
	}

	try
	{
		std::vector<int> vec = ChangeAvtoArray<std::vector<int> >(av);
		timeVec = clock();
		FordJohnsonVec(vec.begin(), vec.end());
		timeVec = clock() - timeVec;

		std::deque<int> deq = ChangeAvtoArray<std::deque<int> >(av);
		timeDeq = clock();
		FordJohnsonDeq(deq.begin(), deq.end());
		timeDeq = clock() - timeDeq;
	}
	catch(...)
	{
		std::cerr << "Error" << std::endl;
	}
}