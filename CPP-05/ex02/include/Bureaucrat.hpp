/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 08:19:27 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 11:48:07 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <exception>

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int		_grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(const std::string &name);
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();

		Bureaucrat			&operator=(const Bureaucrat &src);
		friend std::ostream	&operator<<(std::ostream &out, const Bureaucrat &src);

		std::string		getName() const;
		int				getGrade() const;

		void			UpGrade();
		void			DownGrade();

		void			signForm(AForm &src);
		void			executeForm(AForm const &form);
};

class GradeTooLowException : public std::exception
{
	public:
		const char *what() const throw();
};

class GradeTooHighException : public std::exception
{
	public:
		const char *what() const throw();
};