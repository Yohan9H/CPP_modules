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
	  _target("default"),
	  _status(false),
	  _grade_for_sign(10),
	  _grade_exec(3)
{
	std::cout << "Default constructeur called" << std::endl;
}

AForm::AForm(const AForm &src)
	: _name(src._name),
	  _target(src._target),
	  _status(src._status),
	  _grade_for_sign(src._grade_for_sign),
	  _grade_exec(src._grade_exec)
{
	*this = src;
	std::cout << "Copy constructeur called" << std::endl;
}


AForm::AForm(const std::string &name)
	: _name(name),
	  _target("default"),
	  _status(false),
	  _grade_for_sign(10),
	  _grade_exec(3)
{
	std::cout << "Name constructeur called" << std::endl;
}

AForm::AForm(std::string name, std::string target, int exec, int sign)
	: _name(name),
	  _target(target),
	  _status(false),
	  _grade_for_sign(sign),
	  _grade_exec(exec)
{
	std::cout << "All para constructeur called" << std::endl;
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
	out << "need grade sign: " << src.getGradeForSign() << " | need grade exec: " << src.getGradeForExec() << std::endl;
	return out;
}


// ********************** Methods **********************

std::string	AForm::getName() const
{
	return (this->_name);
}

std::string	AForm::getTarget() const
{
	return (this->_target);
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

void	AForm::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->getGradeForSign())
		throw AForm::GradeTooLowException();
	else
	{
		this->_status = true;
		std::cout << this->getName() << " signed by " << src.getName() << std::endl;
	}
}

const	char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low. (Form)";
}

const	char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high. (Form)";
}

const	char *AForm::FormNotSign::what() const throw()
{
	return "Form is not sign. (Form)";
}
