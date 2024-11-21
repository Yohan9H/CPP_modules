/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:25:05 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 10:29:14 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "all.hpp"

class Cure : virtual public AMateria
{
	private:
		std::string _type;

	public:
		Cure();
		Cure(const Cure &src);
		Cure(std::string &type);
		~Cure();

		virtual AMateria*	clone() const;
		void				use(ICharacter &target);
};