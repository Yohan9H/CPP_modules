/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 08:20:47 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/01 09:46:06 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"

int	main()
{
	std::vector<int> vec;
	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);

	std::list<int> mylist;
	mylist.push_back(0);
	mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(3);
	mylist.push_back(4);
	mylist.push_back(5);
	mylist.push_back(6);

	std::deque<int> queue;
	queue.push_back(0);
	queue.push_back(1);
	queue.push_back(2);
	queue.push_back(3);
	queue.push_back(4);
	queue.push_back(5);
	queue.push_back(6);




	std::cout << "vector :" << std::endl;
	easyfind(vec, 3);
	easyfind(vec, 9);
	easyfind(vec, 0);
	easyfind(vec, 15);
	easyfind(vec, 5);

	std::cout << "\n ------------------------ \n" << std::endl;

	std::cout << "list :" << std::endl;
	easyfind(mylist, 3);
	easyfind(mylist, 9);
	easyfind(mylist, 0);
	easyfind(mylist, 15);
	easyfind(mylist, 5);

	std::cout << "\n ------------------------ \n" << std::endl;

	std::cout << "deque :" << std::endl;
	easyfind(queue, 3);
	easyfind(queue, 9);
	easyfind(queue, 0);
	easyfind(queue, 15);
	easyfind(queue, 5);
}