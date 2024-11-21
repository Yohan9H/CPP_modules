/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:25:07 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 11:26:11 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "all.hpp"

class Ice : virtual public AMateria
{
	private:
		std::string _type;

	public:
		Ice();
		Ice(const Ice &src);
		Ice(std::string &type);
		~Ice();

		virtual AMateria*	clone() const;
		void				use(ICharacter &target);
};