/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 09:54:45 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/02 14:51:17 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>


template <typename T>
void	swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp; 
}

template <typename T>
T		min(T a, T b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T		max(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}
