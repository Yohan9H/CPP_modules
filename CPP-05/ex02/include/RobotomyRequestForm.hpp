/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 08:00:01 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 08:33:17 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();

		RobotomyRequestForm		&operator=(const RobotomyRequestForm &src);
		friend	std::ostream 	&operator<<(std::ostream &out, const RobotomyRequestForm &src);

		void			execute(Bureaucrat const &executor) const;
};