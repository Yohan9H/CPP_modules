/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:25:07 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/22 08:17:30 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "all.hpp"

class Ice : virtual public AMateria
{
	private:
	public:
		Ice();
		Ice(const Ice &src);
		Ice(std::string &type);
		~Ice();

		Ice	&operator=(const Ice &src);

		virtual AMateria*	clone() const;
		void				use(ICharacter &target);
};