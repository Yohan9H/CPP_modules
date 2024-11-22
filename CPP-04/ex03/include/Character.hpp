/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:32:19 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/22 07:51:28 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "all.hpp"

class AMateria;

class Character : virtual public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_storage[4];
		AMateria	*_ground[100];

	public:
		Character();
		Character(const Character &src);
		Character(std::string name);
		~Character();

		Character	&operator=(const Character &src);

		const std::string &getName() const;
		void 		equip(AMateria* m);
		void 		unequip(int idx);
		void 		use(int idx, ICharacter &target);
};