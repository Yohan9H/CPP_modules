/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:12:04 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 11:44:56 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>


// ********************** Constructeur **********************

RobotomyRequestForm::RobotomyRequestForm()
	: AForm(),
	 _name("form"),
	  _status(false),
	  _grade_for_sign(72),
	  _grade_exec(45)
{
	std::cout << "Default constructeur 'RobotomyRequestForm' called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
	: AForm(),
	 _name(src._name),
	  _status(src._status),
	  _grade_for_sign(src._grade_for_sign),
	  _grade_exec(src._grade_exec)
{
	std::cout << "Copy constructeur 'RobotomyRequestForm' called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name)
	: AForm(),
	 _name(name),
	  _status(false),
	  _grade_for_sign(72),
	  _grade_exec(45)
{
	std::cout << "Name constructeur 'RobotomyRequestForm' called" << std::endl;
}


// ********************** Destructeur **********************

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructeur 'RobotomyRequestForm' called" << std::endl;
}


// ********************** Surcharge **********************

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
	{
		this->_status = src._status;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &src)
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

std::string	RobotomyRequestForm::getName() const
{
	return (this->_name);
}

bool	RobotomyRequestForm::getStatus() const
{
	return (this->_status);
}

int		RobotomyRequestForm::getGradeForSign() const
{
	return (this->_grade_for_sign);
}

int		RobotomyRequestForm::getGradeForExec() const
{
	return (this->_grade_exec);
}

void	RobotomyRequestForm::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->getGradeForSign())
		throw GradeTooLowException();
	else
	{
		this->_status = true;
		std::cout << this->getName() << " signed by " << src.getName() << std::endl;
	}
}

void	RobotomyRequestForm::setStatus(bool status)
{
	this->_status = status;
}


void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getStatus() != true)
	{
		std::cout << "Form is not signed" << std::endl;
		return ;
	}
	if (executor.getGrade() <= this->getGradeForExec())
	{
		std::cout << "*** DRILL DRILL DRILL ***" << std::endl;
		std::srand(std::time(0));
		if (std::rand() % 2 == 0)
			std::cout << this->getName() << " has been robotomized !" << std::endl;
		else
			std::cout << this->getName() << " FAILED !" << std::endl;
	}
	else
		throw GradeTooLowException();
};