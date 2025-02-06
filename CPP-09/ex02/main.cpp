/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:55:15 by yohurteb          #+#    #+#             */
/*   Updated: 2025/02/06 22:03:06 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* -------- DEQ ------- */

std::deque<int> genJacobDeq(int n)
{
	std::deque<int> jacobSeq;
	if (n == 0)
		return jacobSeq;
	jacobSeq.push_back(0);
	if (n == 1)
		return jacobSeq;
	jacobSeq.push_back(1);

	int prev = 0;
	int	curr = 1;

	while (true)
	{
		int next = curr + 2 * prev;
		if (next > n)
			break;
		jacobSeq.push_back(next);
		prev = curr;
		curr = next;
	}
	return jacobSeq;
}

std::deque<int> genPosDeq(int n)
{
	std::deque<int> jacobSeq = genJacobDeq(n);
	std::deque<int> positions;
	if (n == 0)
		return positions;
	positions.push_back(1);
	if (n == 1)
		return positions;
	for (size_t i = 1; i < jacobSeq.size(); i++)
	{
		if (jacobSeq[i] > positions.back())
		{
			int tmp = jacobSeq[i - 1];
			positions.push_back(jacobSeq[i]);
			for (int j = jacobSeq[i] - 1; j > tmp; j--)
				positions.push_back(j);
		}
	}
	for (int i = n; i > jacobSeq.back(); i--)
		positions.push_back(i);
	return positions;
}

std::deque<int>::iterator binarySearch(std::deque<int>::iterator begin, std::deque<int>::iterator end, int target)
{
	std::deque<int>::iterator it;
	std::iterator_traits<std::deque<int>::iterator>::difference_type count, step;
	count = std::distance(begin, end);

	while (count > 0)
	{
		it = begin;
		step = count / 2;
		std::advance(it, step);

		if (*it < target)
		{
			begin = ++it;
			count -= step + 1;
		}
		else
			count = step;
	}
	return begin;
}

void FordJohnsonDeq(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
	if (std::distance(begin, end) <= 1)
		return;

	std::deque<std::pair<int, int> > pairs;
	std::deque<int> leftover;

	std::deque<int>::iterator it = begin;
	while (std::distance(it, end) >= 2)
	{
		int first_val = *(it++);
		int second_val = *(it++);
		if (second_val < first_val)
			std::swap(first_val, second_val);
		pairs.push_back(std::make_pair(first_val, second_val));
	}
	if (it != end)
		leftover.push_back(*it);

	std::deque<int> mainChain;
	for (std::deque<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
		mainChain.push_back(it->second);
	if (mainChain.size() >= 2)
		FordJohnsonDeq(mainChain.begin(), mainChain.end());

	std::deque<int> pend;
	for (std::deque<int>::iterator mc_it = mainChain.begin(); mc_it != mainChain.end(); ++mc_it)
	{
		for (std::deque<std::pair<int, int> >::iterator p_it = pairs.begin(); p_it != pairs.end(); ++p_it)
		{
			if (p_it->second == *mc_it)
			{
				pend.push_back(p_it->first);
				break;
			}
		}
	}

	std::deque<int> positions = genPosDeq(pend.size());
	for (size_t i = 0; i < positions.size(); i++)
	{
		std::deque<int>::iterator target = pend.begin();
		if (positions[i] == 1)
		{
			mainChain.push_front(*target);
		}
		else
		{
			std::advance(target, positions[i] - 1);
			int t_value;
			for (std::deque<std::pair<int, int> >::iterator p_it = pairs.begin(); p_it != pairs.end(); ++p_it)
			{
				if (p_it->first == *target)
				{
					t_value = p_it->second;
					break;
				}
			}
			std::deque<int>::iterator searchEnd;
			for (searchEnd = mainChain.begin(); searchEnd != mainChain.end(); ++searchEnd)
				if (*searchEnd == t_value)
					break;
			std::deque<int>::iterator final_pos = binarySearch(mainChain.begin(), searchEnd, *target);
			mainChain.insert(final_pos, *target);
		}
	}
	if (!leftover.empty())
	{
		std::deque<int>::iterator final_pos = binarySearch(mainChain.begin(), mainChain.end(), *leftover.begin());
		mainChain.insert(final_pos, *leftover.begin());
	}

	std::copy(mainChain.begin(), mainChain.end(), begin);
}

/* -------- VEC ------- */

std::vector<int> genJacobVec(int n)
{
	std::vector<int> jacobSeq;

	if (n == 0)
		return (jacobSeq);
	jacobSeq.push_back(0);
	if (n == 1)
		return (jacobSeq);
	jacobSeq.push_back(1);

	int prev = 0;
	int curr = 1;

	while (true)
	{
		int next = curr + 2 * prev;
		if (next > n)
			break;
		jacobSeq.push_back(next);
		prev = curr;
		curr = next;
	}
	return (jacobSeq);
}

std::vector<int> genPosVec(int n)
{
	std::vector<int> jacobSeq = genJacobVec(n);
	std::vector<int> positions;
	if (n == 0)
		return (positions);
	positions.push_back(1);
	if (n == 1)
		return (positions);
	for (int i = 1; i < static_cast<int>(jacobSeq.size()); i++)
	{
		if (jacobSeq[i] > positions.back())
		{
			int tmp = jacobSeq[i - 1];
			positions.push_back(jacobSeq[i]);
			for (int j = jacobSeq[i] - 1; j > tmp; j--)
				positions.push_back(j);
		}
	}
	for (int i = n; i > jacobSeq.back(); i--)
		positions.push_back(i);

	return (positions);
}

std::vector<int>::iterator binarySearch(std::vector<int>::iterator begin, std::vector<int>::iterator end, int target)
{
	std::vector<int>::iterator it;
	std::iterator_traits<std::vector<int>::iterator>::difference_type count, step;
	count = std::distance(begin, end);

	while (count > 0)
	{
		it = begin;
		step = count / 2;
		std::advance(it, step);

		if (*it < target)
		{
			begin = ++it;
			count -= step + 1;
		} 
		else
			count = step;
	}
	return begin;
}

void	FordJohnsonVec(std::vector<int>::iterator begin, std::vector<int>::iterator end) // Faire le return du cont pour faire le print VEC et DEQ
{
	if (std::distance(begin, end) <= 1)
		return;
	std::vector<std::pair<int, int> > pairs;
	std::vector<int> leftover;

	std::vector<int>::iterator it = begin;
	while(std::distance(it, end) >= 2)
	{
		int first_val = *(it++);
		int second_val = *(it++);
		if (second_val < first_val)
			std::swap(first_val, second_val);
		pairs.push_back(std::make_pair(first_val, second_val));
	}
	if (it != end)
		leftover.push_back(*it);

	std::vector<int> mainChain;
	for (std::vector<std::pair<int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it)
		mainChain.push_back(it->second);
	if (mainChain.size() >= 2)
		FordJohnsonVec(mainChain.begin(), mainChain.end());

	std::vector<int> pend;
	for (std::vector<int>::iterator mc_it = mainChain.begin(); mc_it != mainChain.end(); ++mc_it) 
	{
		for (std::vector<std::pair<int, int> >::iterator p_it = pairs.begin(); p_it != pairs.end(); ++p_it)
		{
			if (p_it->second == *mc_it)
			{
				pend.push_back(p_it->first);
				break;
			}
		}
	}

	std::vector<int> positions = genPosVec(pend.size());
	for (int i = 0; i < static_cast<int>(positions.size()); i++)
	{
		std::vector<int>::iterator target = pend.begin();
		if (positions[i] == 1) 
		{
			mainChain.insert(mainChain.begin(), *target);
		} 
		else
		{
			std::advance(target, positions[i] - 1);
			int t_value;
			for (std::vector<std::pair<int, int> >::iterator p_it = pairs.begin(); p_it != pairs.end(); p_it++)
			{
				if (p_it->first == *target)
				{
					t_value = p_it->second;
					break;
				}
			}
			std::vector<int>::iterator searchEnd;
			for (searchEnd = mainChain.begin(); searchEnd != mainChain.end(); searchEnd++)
				if (*searchEnd == t_value)
					break;
			std::vector<int>::iterator final_pos = binarySearch(mainChain.begin(), searchEnd, *target);
			mainChain.insert(final_pos, *target);
		}
	}
	if (!leftover.empty())
	{
		std::vector<int>::iterator final_pos = binarySearch(mainChain.begin(), mainChain.end(), *leftover.begin());
		mainChain.insert(final_pos, *leftover.begin());
	}

	std::copy(mainChain.begin(), mainChain.end(), begin);
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
