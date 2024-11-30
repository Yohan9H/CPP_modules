/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:27:36 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/30 09:00:54 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <iostream>
#include <exception>

class Base
{
	public:
		virtual ~Base();
};

// class BadCast : public std::exception
// {
// 	public:
// 		const char *what() const throw();
// };