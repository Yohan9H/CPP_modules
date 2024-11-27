/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:19:23 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 10:54:12 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreation.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat president("Macron", 5);

		Intern		paul;
		AForm 		*ptr = paul.makeForm("presidential request", "prisonner");
		
		ptr->beSigned(president);
		president.executeForm(*ptr);
		std::cout << *ptr;

		delete ptr;
		std::cout << "\n------------------\n" << std::endl;

		Bureaucrat employe("employe", 5);

		ptr = paul.makeForm("shrubbery request", "arbre");

		ptr->beSigned(employe);
		employe.executeForm(*ptr);
		std::cout << *ptr;

		delete ptr;
		std::cout << "\n------------------\n" << std::endl;

		Bureaucrat builder("employe", 5);

		ptr = paul.makeForm("robotomy request", "robot");

		ptr->beSigned(builder);
		builder.executeForm(*ptr);
		std::cout << *ptr;

		delete ptr;
		std::cout << "\n------------------\n" << std::endl;

		Bureaucrat bad_employe("employe", 5);

		ptr = paul.makeForm("null request", "form");

		ptr->beSigned(builder);
		builder.executeForm(*ptr);
		std::cout << *ptr;

		delete ptr;
		std::cout << "\n------------------\n" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}