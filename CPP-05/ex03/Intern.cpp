/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:48:29 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 14:20:50 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreation.hpp"

// ********************** Constructeur **********************

Intern::Intern()
{
	std::cout << "Default constructeur 'Intern' called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	std::cout << "Copy constructeur 'Intern' called" << std::endl;
}


// ********************** Destructeur **********************

Intern::~Intern()
{
	std::cout << "Destructeur 'Intern' called" << std::endl;
}


// ********************** Surcharge **********************

Intern	&Intern::operator=(const Intern &src)
{
	return *this;
}


// ********************** Methods **********************

PresidentialPardonForm *makePresidentialPardonForm()
{
	return new PresidentialPardonForm();
}

RobotomyRequestForm *makeRobotomyForm()
{
	return new RobotomyRequestForm();
}

ShrubberyCreation *makeShruberryForm()
{
	return new ShrubberyCreation();
}

AForm	*Intern::makeForm(std::string &name, std::string &target)
{
	std::string	tab_name[3] = {
		"robotomy request",
		"presidential request",
		"Shrubbery request"
		};
	AForm	*tab_methods[3] = {
		makePresidentialPardonForm(),
		makeRobotomyForm(),
		makeShruberryForm()
	};

	for (size_t	i = 0; i < 3; i++)
	{
		if (tab_name[i] == name)
			return tab_methods[i];
	}
	
}