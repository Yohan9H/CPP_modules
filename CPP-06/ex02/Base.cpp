/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:27:44 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/30 09:00:51 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	std::cout << "Defauflt destructeur called" << std::endl;
}

// const char	*BadCast::what() const throw()
// {
// 	return "** Dynamic_cast FAILED **";
// }