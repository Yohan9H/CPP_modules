/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 08:00:04 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 10:28:47 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreation : virtual public AForm
{
	private:
		const std::string	_name;
		bool				_status;
		const	int			_grade_for_sign;
		const	int			_grade_exec;
	
	public:
		ShrubberyCreation();
		ShrubberyCreation(const ShrubberyCreation &src);
		ShrubberyCreation(const std::string &name);
		~ShrubberyCreation();

		ShrubberyCreation		&operator=(const ShrubberyCreation &src);
		friend	std::ostream 	&operator<<(std::ostream &out, const ShrubberyCreation &src);

		std::string		getName() const;
		bool			getStatus() const;
		int				getGradeForSign() const;
		int				getGradeForExec() const;
		void			setStatus(bool status);
		void			beSigned(const Bureaucrat &src);
		void			execute(Bureaucrat const &executor) const;
};