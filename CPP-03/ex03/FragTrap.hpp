/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:19:24 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/18 11:32:13 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(std:: string name);
		FragTrap(const FragTrap &src);
		~FragTrap();

		FragTrap	&operator=(const FragTrap &src);
		void		highFivesGuys();
};