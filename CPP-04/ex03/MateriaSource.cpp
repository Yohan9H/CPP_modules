/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:24:45 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 15:33:14 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"

// ******************** Constructeur ********************

MateriaSource::MateriaSource()
	: IMateriaSource()
{
	std::cout << "Default constructor 'MateriaSource' called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src)
	: IMateriaSource()
{
	std::cout << "Copy constructor 'MateriaSource' called" << std::endl;
}


// ******************** Destructeur ********************

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		if (this->_book[i] != NULL)
			delete this->_book[i];

	std::cout << "Destructor 'MateriaSource' called" << std::endl;
}

// ******************** Surcharge ********************

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		for (size_t i = 0; i < 4; i++)
			this->_book[i] = src._book[i]->clone();
	}
}


// ******************** Methods ********************

void	MateriaSource::learnMateria(AMateria *src)
{
	if (!src)
		return ;
	else
	{
		for (size_t i = 0; i < 4; i++)
		if (this->_book[i] != NULL)
		{
			this->_book[i] == src;
			std::cout << "write spell in book" << std::endl;
			return ;
		}
	}
	std::cout << "can't write spell in book" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &src)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_book[i]->getType() == src)
			return this->_book[i]->clone();
	}
	std::cout << "createMateria failed" << std::endl;
	return NULL;
}