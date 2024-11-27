/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 08:00:04 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/27 08:33:22 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreation : public AForm
{
	private:
	public:
		ShrubberyCreation();
		ShrubberyCreation(const ShrubberyCreation &src);
		ShrubberyCreation(const std::string &target);
		~ShrubberyCreation();

		ShrubberyCreation		&operator=(const ShrubberyCreation &src);
		friend	std::ostream 	&operator<<(std::ostream &out, const ShrubberyCreation &src);

		void			execute(Bureaucrat const &executor) const;
};