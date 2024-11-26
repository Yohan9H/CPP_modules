/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:40:33 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 14:57:32 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_status;
		const	int			_grade_for_sign;
		const	int			_grade_exec;
	
	public:
		Form();
		Form(const Form &src);
		Form(const std::string &name);
		Form(const std::string &name, const int &grade_for_sign, const int &grade_exec);
		~Form();

		Form	&operator=(const Form &src);
		friend	std::ostream &operator<<(std::ostream &out, const Form &src);

		std::string			getName() const;
		bool				getStatus() const;
		int					getGradeForSign() const;
		int					getGradeForExec() const;
		void				setStatus(bool status);
		void				beSigned(const Bureaucrat &src);
		
		class	GradeTooLowException;
		class	GradeTooHighException;
};

class Form::GradeTooLowException : public std::exception
{
	public:
		const char *what() const throw();
};

class Form::GradeTooHighException : public std::exception
{
	public:
		const char *what() const throw();
};