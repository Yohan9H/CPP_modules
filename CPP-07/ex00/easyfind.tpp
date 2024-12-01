/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 08:20:52 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/01 09:36:20 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "easyfind.hpp"


template <typename T, typename entier>
void	easyfind(T v1, entier i)
{
	if (std::find(v1.begin(), v1.end(), i) != v1.end())
		std::cout << "-> " << i <<" found" << std::endl;
	else
		std::cout << "-> " << i << " not found" << std::endl;
}