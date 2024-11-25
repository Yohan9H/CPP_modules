/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:19:23 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/25 11:31:59 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat employe("Jean", 2);

		std::cout << employe;
		employe.UpGrade();
		std::cout << employe;
		employe.UpGrade();
		std::cout << employe;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n---------------------\n" << std::endl;

	try
	{
		Bureaucrat employe("Paul", 149);

		std::cout << employe;
		employe.DownGrade();
		std::cout << employe;
		employe.DownGrade();
		std::cout << employe;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n---------------------\n" << std::endl;

	try
	{
		Bureaucrat employe("Paul", -1);

		std::cout << employe;
		employe.DownGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}