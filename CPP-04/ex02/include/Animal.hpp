/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:33:15 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 17:12:06 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

class Animal
{
	protected:
		Animal();
		Animal(const Animal &src);

		std::string _type;

	public:
		virtual ~Animal();

		Animal &operator=(const Animal &src);

		virtual void				makeSound() const = 0;
		virtual const std::string	&getType() const;
		virtual void				show_begin_brain() const;
};