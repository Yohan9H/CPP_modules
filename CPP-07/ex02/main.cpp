/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:38:12 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/02 15:13:38 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int>	t1(5);

    srand(time(NULL));
	for (size_t i = 0; i < t1.size(); i++)
		t1[i] = i;

	std::cout << "\nArray 't1':" << std::endl;
	for (size_t i = 0; i < t1.size(); i++)
		std::cout << t1[i] << std::endl;


	std::cout << "\n-----------------------\n" << std::endl;


	Array<int>	t2 = t1;

	std::cout << "\nArray 't2':" << std::endl;
	for (size_t i = 0; i < t2.size(); i++)
		std::cout << t2[i] << std::endl;

	t2[2] = 55;
	
	std::cout << "\n-> Modif t2\n" << std::endl;

	std::cout << "\nArray 't1':" << std::endl;
	for (size_t i = 0; i < t1.size(); i++)
		std::cout << t1[i] << std::endl;

	std::cout << "\nArray 't2':" << std::endl;
	for (size_t i = 0; i < t2.size(); i++)
		std::cout << t2[i] << std::endl;
	std::cout << "\n" << std::endl;


	std::cout << "\n----------- Test invalid index ------------\n" << std::endl;


	try
	{
		t1[2334] = 1;
	}
	catch  (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}