/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:25:00 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 14:19:09 by yohurteb         ###   ########.fr       */
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
		AMateria &operator=(const AMateria &src);
	
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();

		const std::string	&getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);
};