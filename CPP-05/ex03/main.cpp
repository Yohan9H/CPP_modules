/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:19:23 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 11:57:45 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreation.hpp"

int main()
{
	try
	{
		Bureaucrat employe("Jean", 5);
		Bureaucrat president("Macron", 5);
		Bureaucrat artist("artiste", 137);

		RobotomyRequestForm 	form1("maison");
		PresidentialPardonForm 	form_president("prisonner");
		ShrubberyCreation		form3("arbre");

		std::cout << "\n------------------\n" << std::endl;

		std::cout << form1;
		employe.signForm(form1);
		form1.execute(employe);
		std::cout << form1;

		std::cout << "\n------------------\n" << std::endl;

		std::cout << president;
		president.signForm(form_president);
		form_president.execute(president);
		president.DownGrade();
		std::cout << president;
		// form_president.execute(president); Throw
		president.executeForm(form_president);

		std::cout << "\n------------------\n" << std::endl;

		std::cout << artist;
		artist.signForm(form3);
		artist.executeForm(form3);
		std::cout << artist;

		std::cout << "\n------------------\n" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}