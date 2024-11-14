/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:58:24 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/14 08:06:09 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

class Harl
{
	public:
		Harl();
		~Harl();

		void	complain(std::string level);

	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
};