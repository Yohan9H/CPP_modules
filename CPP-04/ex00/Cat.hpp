/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:35:38 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 09:45:27 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : virtual public Animal
{
	private:
		std:: string _type;

	public:
		Cat();
		Cat(const Cat &src);
		~Cat();

		Cat &operator=(const Cat &src);

		const std::string	&getType() const;
		void 		makeSound() const;
};