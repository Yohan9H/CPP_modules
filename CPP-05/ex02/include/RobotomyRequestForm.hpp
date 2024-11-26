/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 08:00:01 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 10:28:43 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : virtual public AForm
{
	private:
		const std::string	_name;
		bool				_status;
		const	int			_grade_for_sign;
		const	int			_grade_exec;
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm(const std::string &name);
		~RobotomyRequestForm();

		RobotomyRequestForm		&operator=(const RobotomyRequestForm &src);
		friend	std::ostream 	&operator<<(std::ostream &out, const RobotomyRequestForm &src);

		std::string		getName() const;
		bool			getStatus() const;
		int				getGradeForSign() const;
		int				getGradeForExec() const;
		void			setStatus(bool status);
		void			beSigned(const Bureaucrat &src);
		void			execute(Bureaucrat const &executor) const;
};