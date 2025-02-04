/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:25:10 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 15:45:49 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "all.hpp"

class AMateria;

class MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria *_book[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		~MateriaSource();

		MateriaSource &operator=(const MateriaSource &src);

		void		learnMateria(AMateria *src);
		AMateria	*createMateria(std::string const &type);
	
};