/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 10:41:01 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/01 11:22:16 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void	display_i(T c)
{
	std::cout << "-> " << c << " (in iter)" << std::endl;
}

template <typename T1, typename T2, typename T3>
void	iter(T1 &tab, T2 lenght, T3 function)
{
	for (T2 i = 0; i < lenght; i++)
		function(tab[i]);
}

