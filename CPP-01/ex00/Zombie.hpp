/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 07:52:11 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/07 08:38:52 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();

		void	announce();
		void	setNameZombie(std::string nameZ);

	private:
		std::string	name;
};

Zombie* newZombie(std::string name);

void	randomChump(std::string name);

#endif