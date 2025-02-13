/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:19:58 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 09:05:28 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// ********************** Constructeur **********************

Bureaucrat::Bureaucrat()
	: _name("unknow"),
	  _grade(150)
{
	std::cout << "Default constructeur called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
	: _name(src._name),
	  _grade(src._grade)
{
	std::cout << "Copy constructeur called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name)
	: _name(name),
	  _grade(150)
{
	std::cout << "Name constructeur called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: _name(name),
	  _grade(grade)
{
	std::cout << "Name and Grade constructeur called" << std::endl;
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
}


// ********************** Destructeur **********************

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructeur called" << std::endl;
}


// ********************** Surcharge **********************

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
	{
		this->_grade = src.getGrade();
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrate grade " << src.getGrade() << std::endl;
	return out;
}


// ********************** Methods **********************

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::UpGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::DownGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &src)
{
	if (this->getGrade() > src.getGradeForSign())
		std::cout << this->getName() << " couldn't sign " << src.getTarget() << " because his grade is low." << std::endl;
	else
	{
		src.setStatus(true);
		std::cout << this->getName() << " signed " << src.getName() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	if (form.getStatus() != true)
	{
		std::cout << "Form is not signed" << std::endl;
		return ;
	}
	if (this->getGrade() <= form.getGradeForExec())
	{
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
		form.execute(*this);
	}
	else
		std::cout << this->getName() << " can't execute form" << std::endl;
}

// ********************** Exceptions **********************

const	char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

const	char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}
