/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:48:29 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 10:36:09 by yohurteb         ###   ########.fr       */
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
	*this = src;
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
	(void)src;
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

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3] = {"presidential request", "robotomy request", "shrubbery request"};
	AForm		*form = NULL;
	int			choice = -1;

	for (size_t i = 0; i < 3; ++i)
	{
		if (name == tab[i])
			choice = i;
	}
	
	switch (choice)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreation(target);
			break;
		default:
			throw Intern::BadName();
	}
	std::cout << "Intern create " << form->getName() << std::endl;
	
	return form;
}

const char *Intern::BadName::what() const throw()
{
	return "Bad Name";
}