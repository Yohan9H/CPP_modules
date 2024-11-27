/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 07:59:51 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 08:33:29 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &src);
		friend	std::ostream 	&operator<<(std::ostream &out, const PresidentialPardonForm &src);

		void			execute(Bureaucrat const &executor) const;
};
