/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:16:32 by yohan.h           #+#    #+#             */
/*   Updated: 2024/11/08 17:41:24 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon 
{
	public:
		Weapon(std::string name = "hands");
		~Weapon();

		std::string	getType() const;
		void		setType(std::string type);

	private:
		std::string _name;
};