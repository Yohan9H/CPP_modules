/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:01:12 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 15:42:24 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


// ********************** Constructeur **********************

PresidentialPardonForm::PresidentialPardonForm()
	: AForm(),
	  _name("form"),
	  _status(false),
	  _grade_for_sign(25),
	  _grade_exec(5)
{
	std::cout << "Default constructeur 'PresidentPardonForm' called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
	: AForm(),
	  _name(src._name),
	  _status(src._status),
	  _grade_for_sign(src._grade_for_sign),
	  _grade_exec(src._grade_exec)
{
	std::cout << "Copy constructeur 'PresidentPardonForm' called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &name)
	: AForm(),
	 _name(name),
	  _status(false),
	  _grade_for_sign(25),
	  _grade_exec(5)
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
	if (this != &src)
	{
		this->_status = src._status;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &src)
{
	out << src.getName() << ": ";
	if (src.getStatus() == true)
		out << "signed | ";
	else
		out << "not signed | ";
	out << "need grade: " << src.getGradeForSign() << " | need grade exec: " << src.getGradeForExec() << std::endl;
	return out;
}


// ********************** Methods **********************

std::string	PresidentialPardonForm::getName() const
{
	return (this->_name);
}

bool	PresidentialPardonForm::getStatus() const
{
	return (this->_status);
}

int		PresidentialPardonForm::getGradeForSign() const
{
	return (this->_grade_for_sign);
}

int		PresidentialPardonForm::getGradeForExec() const
{
	return (this->_grade_exec);
}

void	PresidentialPardonForm::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->getGradeForSign())
		throw AForm::GradeTooLowException();
	else
	{
		this->_status = true;
		std::cout << this->getName() << " signed by " << src.getName() << std::endl;
	}
}

void	PresidentialPardonForm::setStatus(bool status)
{
	this->_status = status;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getStatus() != true)
	{
		std::cout << "Form is not signed" << std::endl;
		throw AForm::FormNotSign();
	}
	if (executor.getGrade() <= this->getGradeForExec())
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	else
		throw AForm::GradeTooLowException();
};
