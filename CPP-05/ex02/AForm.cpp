/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:49:29 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/25 15:38:00 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// ********************** Constructeur **********************

AForm::AForm()
	: _name("form"),
	  _status(false),
	  _grade_for_sign(10),
	  _grade_exec(3)
{
	std::cout << "Default constructeur called" << std::endl;
}

AForm::AForm(const AForm &src)
	: _name(src._name),
	  _status(src._status),
	  _grade_for_sign(src._grade_for_sign),
	  _grade_exec(src._grade_exec)
{
	std::cout << "Copy constructeur called" << std::endl;
}

AForm::AForm(const std::string &name)
	: _name(name),
	  _status(false),
	  _grade_for_sign(10),
	  _grade_exec(3)
{
	std::cout << "Name constructeur called" << std::endl;
}


// ********************** Destructeur **********************

AForm::~AForm()
{
	std::cout << "Destructeur called" << std::endl;
}


// ********************** Surcharge **********************

AForm	&AForm::operator=(const AForm &src)
{
	if (this != &src)
	{
		this->_status = src._status;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const AForm &src)
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

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getStatus() const
{
	return (this->_status);
}

int		AForm::getGradeForSign() const
{
	return (this->_grade_for_sign);
}

int		AForm::getGradeForExec() const
{
	return (this->_grade_exec);
}

void	AForm::setStatus(bool status)
{
	this->_status = status;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	(void)executor;
	std::cout << "* Not real form *" << std::endl;
};