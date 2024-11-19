/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:19:24 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/19 08:43:53 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
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