/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 07:59:51 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 10:27:40 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : virtual public AForm
{
	private:
		const std::string	_name;
		bool				_status;
		const	int			_grade_for_sign;
		const	int			_grade_exec;
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm(const std::string &name);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &src);
		friend	std::ostream 	&operator<<(std::ostream &out, const PresidentialPardonForm &src);

		std::string		getName() const;
		bool			getStatus() const;
		int				getGradeForSign() const;
		int				getGradeForExec() const;
		void			setStatus(bool status);
		void			beSigned(const Bureaucrat &src);
		void			execute(Bureaucrat const &executor) const;
};
