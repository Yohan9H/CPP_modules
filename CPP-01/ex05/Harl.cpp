/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:58:26 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/14 09:12:13 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Public
Harl::Harl() {}

Harl::~Harl() {}


void	Harl::complain(std::string level)
{
	
}


// Private
void	Harl::debug()
{
	std::cout << "DEBUG: here" << std::endl;
}

void	Harl::info()
{
	std::cout << "INFO: take info" << std::endl;
}

void	Harl::warning()
{
	std::cout << "WARNING: !!!" << std::endl;
}

void	Harl::error()
{
	std::cout << "ERROR: !!!!!!!!!!!!" << std::endl;
}
