/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:01:12 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 09:06:21 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


// ********************** Constructeur **********************

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("form_president", "default", 5, 25)
{
	std::cout << "Default constructeur 'PresidentPardonForm' called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
	: AForm(src)
{
	std::cout << "Copy constructeur 'PresidentPardonForm' called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("form_president", target, 5, 25)
{
	std::cout << "Name constructeur 'PresidentPardonForm' called" << std::endl;
}


// ********************** Destructeur **********************

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructeur 'PresidentPardonForm' called" << std::endl;
}


// ********************** Surcharge **********************

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	(void)src;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &src)
{
	out << src.getName() << ": ";
	if (src.getStatus() == true)
		out << "signed | ";
	else
		out << "not signed | ";
	out << "need grade sign: " << src.getGradeForSign() << " | need grade exec: " << src.getGradeForExec() << std::endl;
	return out;
}


// ********************** Methods **********************

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getStatus() != true)
	{
		std::cout << "Form is not signed" << std::endl;
		throw AForm::FormNotSign();
	}
	if (executor.getGrade() <= this->getGradeForExec())
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		throw AForm::GradeTooLowException();
};
