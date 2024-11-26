/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:19:23 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 15:02:27 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat employe("Jean", 2);
		Form	form1("form1", 1, 10);

		std::cout << form1 << "\n";
		std::cout << employe;

		// form1.beSigned(employe); // Catch if false
		employe.signForm(form1);    // No catch if false

		std::cout << "----------------" << std::endl;

		employe.UpGrade();
		
		std::cout << employe;

		employe.signForm(form1);
		form1.beSigned(employe);

		std::cout << "\n";
		std::cout << form1;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}