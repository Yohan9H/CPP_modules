/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:53:11 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/18 15:17:37 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(std:: string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();

		ScavTrap	&operator=(const ScavTrap &src);
		void		attack(const std::string &target);
		void		guardGate();
};