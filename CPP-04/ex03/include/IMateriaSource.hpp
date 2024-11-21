/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:35:25 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 15:45:54 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "all.hpp"

class AMateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource();

		virtual	void		learnMateria(AMateria *src) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};