/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:40:33 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 08:10:35 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_status;
		const	int			_grade_for_sign;
		const	int			_grade_exec;
	
	public:
		AForm();
		AForm(const AForm &src);
		AForm(const std::string &name);
		AForm(std::string name, std::string target, int exec, int sign);
		virtual ~AForm();

		AForm					&operator=(const AForm &src);
		friend	std::ostream	&operator<<(std::ostream &out, const AForm &src);

		virtual std::string		getName() const;
		virtual std::string		getTarget() const;
		virtual bool			getStatus() const;
		virtual int				getGradeForSign() const;
		virtual int				getGradeForExec() const;
		virtual void			setStatus(bool status);
		virtual void			beSigned(const Bureaucrat &src);
		virtual void			execute(Bureaucrat const &executor) const = 0;

		class	GradeTooLowException;
		class	GradeTooHighException;
		class	FormNotSign;
};

class AForm::GradeTooLowException : public std::exception
{
	public:
		const char *what() const throw();
};

class AForm::GradeTooHighException : public std::exception
{
	public:
		const char *what() const throw();
};

class AForm::FormNotSign : public std::exception
{
	public:
		const char *what() const throw();
};