/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:49:29 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/25 15:46:03 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ********************** Constructeur **********************

Form::Form()
	: _name("form"),
	  _status(false),
	  _grade_for_sign(10),
	  _grade_exec(3)
{
	std::cout << "Default constructeur called" << std::endl;
}

Form::Form(const Form &src)
	: _name(src._name),
	  _status(src._status),
	  _grade_for_sign(src._grade_for_sign),
	  _grade_exec(src._grade_exec)
{
	std::cout << "Copy constructeur called" << std::endl;
}

Form::Form(const std::string &name)
	: _name(name),
	  _status(false),
	  _grade_for_sign(10),
	  _grade_exec(3)
{
	std::cout << "Name constructeur called" << std::endl;
}

Form::Form(const std::string &name,const int &grade_for_sign, const int &grade_exec)
	: _name(name),
	  _grade_for_sign(grade_for_sign),
	  _grade_exec(grade_exec)
{
	this->_status = false;
	if (this->_grade_for_sign < 1)
		throw GradeTooHighException();
	if (this->_grade_for_sign > 150)
		throw GradeTooLowException();

	if (this->_grade_exec < 1)
		throw GradeTooHighException();
	if (this->_grade_exec > 150)
		throw GradeTooLowException();

	std::cout << "Name and Grade constructeur called" << std::endl;
}


// ********************** Destructeur **********************

Form::~Form()
{
	std::cout << "Destructeur called" << std::endl;
}


// ********************** Surcharge **********************

Form	&Form::operator=(const Form &src)
{
	if (this != &src)
	{
		this->_status = src._status;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Form &src)
{
	out << src.getName() << ": ";
	if (src.getStatus() == true)
		out << "signed | ";
	else
		out << "not signed | ";
	out << "need grade for sign: " << src.getGradeForSign() << " | need grade for exec: " << src.getGradeForExec() << std::endl;
	return out;
}


// ********************** Methods **********************

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getStatus() const
{
	return (this->_status);
}

int		Form::getGradeForSign() const
{
	return (this->_grade_for_sign);
}

int		Form::getGradeForExec() const
{
	return (this->_grade_exec);
}

void	Form::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->getGradeForSign())
		throw GradeTooLowException();
	else
	{
		this->_status = true;
		std::cout << this->getName() << " signed by " << src.getName() << std::endl;
	}
}

void	Form::setStatus(bool status)
{
	this->_status = status;
}
