/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:25:02 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 15:45:34 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "all.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual 			~ICharacter();
		
		virtual std::string const &getName() const = 0;
		virtual void 		equip(AMateria* m) = 0;
		virtual void 		unequip(int idx) = 0;
		virtual void 		use(int idx, ICharacter &target) = 0;
};