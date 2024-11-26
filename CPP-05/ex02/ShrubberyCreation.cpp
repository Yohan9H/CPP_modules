/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 08:59:04 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 11:43:22 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreation.hpp"
#include <fstream>

// ********************** Constructeur **********************

ShrubberyCreation::ShrubberyCreation()
	: AForm(),
	 _name("form"),
	  _status(false),
	  _grade_for_sign(145),
	  _grade_exec(137)
{
	std::cout << "Default constructeur 'ShrubberyCreation' called" << std::endl;
}

ShrubberyCreation::ShrubberyCreation(const ShrubberyCreation &src)
	: AForm(),
	 _name(src._name),
	  _status(src._status),
	  _grade_for_sign(src._grade_for_sign),
	  _grade_exec(src._grade_exec)
{
	std::cout << "Copy constructeur 'ShrubberyCreation' called" << std::endl;
}

ShrubberyCreation::ShrubberyCreation(const std::string &name)
	: AForm(),
	 _name(name),
	  _status(false),
	  _grade_for_sign(145),
	  _grade_exec(137)
{
	std::cout << "Name constructeur 'ShrubberyCreation' called" << std::endl;
}


// ********************** Destructeur **********************

ShrubberyCreation::~ShrubberyCreation()
{
	std::cout << "Destructeur 'ShrubberyCreation' called" << std::endl;
}


// ********************** Surcharge **********************

ShrubberyCreation	&ShrubberyCreation::operator=(const ShrubberyCreation &src)
{
	if (this != &src)
	{
		this->_status = src._status;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreation &src)
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

std::string	ShrubberyCreation::getName() const
{
	return (this->_name);
}

bool	ShrubberyCreation::getStatus() const
{
	return (this->_status);
}

int		ShrubberyCreation::getGradeForSign() const
{
	return (this->_grade_for_sign);
}

int		ShrubberyCreation::getGradeForExec() const
{
	return (this->_grade_exec);
}

void	ShrubberyCreation::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->getGradeForSign())
		throw GradeTooLowException();
	else
	{
		this->_status = true;
		std::cout << this->getName() << " signed by " << src.getName() << std::endl;
	}
}

void	ShrubberyCreation::setStatus(bool status)
{
	this->_status = status;
}

void	ShrubberyCreation::execute(Bureaucrat const &executor) const
{
	if (this->getStatus() != true)
	{
		std::cout << "Form is not signed" << std::endl;
		return ;
	}
	if (executor.getGrade() <= this->getGradeForExec())
	{
		std::string name_file = executor.getName() + "_shrubbery";
		std::ofstream file(name_file.c_str(), std::ios::out);
		file << "                                                         ." << std::endl;
		file << "                                              .         ;  " << std::endl;
		file << "                 .              .              ;%     ;;   " << std::endl;
		file << "                   ,           ,                :;%  %;   " << std::endl;
		file << "                    :         ;                   :;%;'     .,   " << std::endl;
		file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
		file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
		file << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
		file << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
		file << "                          `@%%. `@%%    ;@@%;        " << std::endl;
		file << "                            ;@%. :@%%  %@@%;       " << std::endl;
		file << "                              %@bd%%%bd%%:;     " << std::endl;
		file << "                                #@%%%%%:;;" << std::endl;
		file << "                                %@@%%%::;" << std::endl;
		file << "                                %@@@%(o);  . '         " << std::endl;
		file << "                                %@@@o%;:(.,'         " << std::endl;
		file << "                            `.. %@@@o%::;         " << std::endl;
		file << "                               `)@@@o%::;         " << std::endl;
		file << "                                %@@(o)::;        " << std::endl;
		file << "                               .%@@@@%::;         " << std::endl;
		file << "                               ;%@@@@%::;.          " << std::endl;
		file << "                              ;%@@@@%%:;;;. " << std::endl;
		file << "                          ...;%@@@@@%%:;;;;,..  " << std::endl;

		std::cout << "File ASCII tree created" << std::endl;
	}
	else
		throw GradeTooLowException();
};
