/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:50:35 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/26 13:54:14 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &src);
		~Intern();

		Intern	&operator=(const Intern &src);

		AForm	*makeForm(std::string &name_, std::string &target);
};