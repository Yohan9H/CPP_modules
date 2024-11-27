/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:48:29 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 14:17:41 by yohurteb         ###   ########.fr       */
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

AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm			*form = NULL;
	std::string 	tab[3] = {"presidential request", "robotomy request", "shrubbery request"};
	AForm*	(*methods[])(std::string target) = 
	{
		&PresidentialPardonForm::newForm,
		&RobotomyRequestForm::newForm,
		&ShrubberyCreation::newForm
	};

	for (size_t i = 0; i < 3; i++)
	{
		if (tab[i] == name)
		{
			form = methods[i](target);
			std::cout << "Intern create new form" << std::endl;	
			return form;
		}
	}
	throw Intern::BadName();
}

const char *Intern::BadName::what() const throw()
{
	return "Type form is not good (Intern)";
}