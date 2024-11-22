/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:25:05 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/22 08:17:33 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "all.hpp"

class Cure : virtual public AMateria
{
	private:
	public:
		Cure();
		Cure(const Cure &src);
		Cure(std::string &type);
		~Cure();

		Cure	&operator=(const Cure &src);

		virtual AMateria*	clone() const;
		void				use(ICharacter &target);
};