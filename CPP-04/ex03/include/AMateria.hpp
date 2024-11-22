/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:25:00 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/22 15:06:33 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "all.hpp"

class AMateria
{
	protected:
		std::string	_type;

		AMateria();
		AMateria(const AMateria &src);
		AMateria(std::string const &type);
		AMateria &operator=(const AMateria &src);
	
	public:
		virtual ~AMateria();

		const std::string	&getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
};