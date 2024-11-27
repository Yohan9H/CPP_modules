/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:12:04 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 09:06:33 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>


// ********************** Constructeur **********************

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("form_robotomy", "default", 45, 72)
{
	std::cout << "Default constructeur 'RobotomyRequestForm' called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
	: AForm(src)
{
	std::cout << "Copy constructeur 'RobotomyRequestForm' called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("form_robotomy", target, 45, 72)
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
	(void)src;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &src)
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

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getStatus() != true)
	{
		std::cout << "Form is not signed" << std::endl;
		throw AForm::FormNotSign();
	}
	if (executor.getGrade() <= this->getGradeForExec())
	{
		std::cout << "*** DRILL DRILL DRILL ***" << std::endl;
		std::srand(std::time(0));
		if (std::rand() % 2 == 0)
			std::cout << this->getTarget() << " has been robotomized !" << std::endl;
		else
			std::cout << this->getTarget() << " FAILED !" << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
};