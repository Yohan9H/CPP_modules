/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:52:47 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 11:05:57 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	private:
		std:: string _type;

	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		~WrongCat();

		WrongCat &operator=(const WrongCat &src);

		const std::string	&getType() const;
		void 		makeSound() const;
};