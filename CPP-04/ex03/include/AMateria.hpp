/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:25:00 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 08:33:08 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		AMateria();
		AMateria(const AMateria &src);
		AMateria &operator=(const AMateria &src);
	
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();

		std::string const &getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};