/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:36:50 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 09:45:30 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : virtual public Animal
{
	private:
		std:: string _type;

	public:
		Dog();
		Dog(const Dog &src);
		~Dog();

		Dog &operator=(const Dog &src);

		const std::string	&getType() const;
		void 		makeSound() const;
};