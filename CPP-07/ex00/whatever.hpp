/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 09:54:45 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/01 10:24:32 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>


template <typename swap>
void	ft_swap(swap &a, swap &b)
{
	swap tmp;

	tmp = a;
	a = b;
	b = tmp; 
}

template <typename min>
min		ft_min(min a, min b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename max>
max		ft_max(max a, max b)
{
	if (a > b)
		return a;
	else
		return b;
}
