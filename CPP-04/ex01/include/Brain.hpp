/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:21:19 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 15:15:32 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(const Brain &src);
		~Brain();

		Brain	&operator=(const Brain &src);
		std::string	get_one_ideas(int i) const;
		void		set_one_ideas(int i, std::string cpy);
};