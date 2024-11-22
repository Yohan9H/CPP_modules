/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:24:45 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/22 13:57:32 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"

// ******************** Constructeur ********************

MateriaSource::MateriaSource()
	: IMateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		this->_book[i] = NULL;

	std::cout << "Default constructor 'MateriaSource' called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src)
	: IMateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_book[i] != NULL)
			this->_book[i] = src._book[i]->clone();
		else
			this->_book[i] = NULL;
	}

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
	return *this;
}


// ******************** Methods ********************

void	MateriaSource::learnMateria(AMateria *src)
{
	if (!src)
		return ;
	else
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->_book[i] == NULL)
			{
				this->_book[i] = src;
				std::cout << "-> " << "write spell in book" << std::endl;
				return ;
			}
		}
	}
	delete src;
	std::cout << "-> " << "can't write spell in book" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &src)
{
	if (src != "ice" && src != "cure")
	{
		std::cout << "-> " << "type not find" << std::endl;
		return NULL;
	}

	for (size_t i = 0; i < 4; i++)
	{
		if (this->_book[i] != NULL && this->_book[i]->getType() == src)
			return this->_book[i]->clone();
	}

	std::cout << "-> " << "createMateria failed" << std::endl;
	return NULL;
}
