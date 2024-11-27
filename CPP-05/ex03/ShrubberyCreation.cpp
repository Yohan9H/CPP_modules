/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 08:59:04 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 13:26:27 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreation.hpp"
#include <fstream>

// ********************** Constructeur **********************

ShrubberyCreation::ShrubberyCreation()
	: AForm("form_shrubbery", "default", 137, 145)
{
	std::cout << "Default constructeur 'ShrubberyCreation' called" << std::endl;
}

ShrubberyCreation::ShrubberyCreation(const ShrubberyCreation &src)
	: AForm(src)
{
	std::cout << "Copy constructeur 'ShrubberyCreation' called" << std::endl;
}

ShrubberyCreation::ShrubberyCreation(const std::string &target)
	: AForm("form_shrubbery", target, 137, 145)
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
	(void)src;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreation &src)
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

void	ShrubberyCreation::execute(Bureaucrat const &executor) const
{
	if (this->getStatus() != true)
	{
		std::cout << "Form is not signed" << std::endl;
		throw AForm::FormNotSign();
	}
	if (executor.getGrade() <= this->getGradeForExec())
	{
		std::string name_file = this->getTarget() + "_shrubbery";
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
		throw AForm::GradeTooLowException();
};

AForm	*ShrubberyCreation::newForm(std::string target)
{
	return new ShrubberyCreation(target);
}
