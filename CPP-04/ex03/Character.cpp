/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:24:54 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/22 14:11:45 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"

// ******************** Constructeur ********************

Character::Character()
	: ICharacter(),
	  _name("42")
{
	for (size_t i = 0; i < 4; i++)
		this->_storage[i] = NULL;

	for (size_t i = 0; i < 100; i++)
		this->_ground[i] = NULL;

	std::cout << "Default constructor 'Character' called" << std::endl;
}

Character::Character(const Character &src)
	: ICharacter(),
	  _name(src._name)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_storage[i] != NULL)
			this->_storage[i] = src._storage[i]->clone();
	}

	for (size_t i = 0; i < 100; i++)
	{
		if (this->_ground[i] != NULL)
			this->_ground[i] = src._ground[i]->clone();
	}

	std::cout << "Copy constructor 'Character' called" << std::endl;
}

Character::Character(std::string name)
	: ICharacter(),
	  _name(name)
{
	for (size_t i = 0; i < 4; i++)
		this->_storage[i] = NULL;

	for (size_t i = 0; i < 100; i++)
		this->_ground[i] = NULL;

	std::cout << "Copy_string constructeur 'Character' called" << std::endl;
}


// ******************** Destructeur ********************

Character::~Character()
{
	std::cout << "Destructor 'Character' called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_storage[i] != NULL)
			delete this->_storage[i]; 

	}
	for (size_t i = 0; i < 100; i++)
	{
		if (this->_ground[i] != NULL)
			delete this->_ground[i];
	}
}


// ******************** Surcharge ********************

Character	&Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->_name = src._name;

		for (size_t i = 0; i < 4; i++)
		{
			if (this->_storage[i] != NULL)
				this->_storage[i] = src._storage[i]->clone();
		}
		
		for (size_t i = 0; i < 100; i++)
		{
			if (this->_ground[i] != NULL)
				this->_ground[i] = src._ground[i]->clone();
		}
	}
	return *this;
}


// ******************** Methods ********************

const std::string	&Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	if (m == NULL)
	{
		std::cout << "-> " << this->_name << " can't equip spell" << std::endl;
		return ;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_storage[i] == NULL)
		{
			this->_storage[i] = m->clone();
			delete m;
			m = NULL;
			// for (size_t j = 0; j < 100; j++)
			// {
			// 	if (this->_ground[j] == NULL)
			// 	{
			// 		this->_ground[j] = m;
			// 	}
			// }
			std::cout << "-> " << this->_name << " equip spell" << std::endl;
			return ;
		}
	}

	std::cout << "-> " << this->_name << " can't equip spell" << std::endl;
	delete m;
	m = NULL;
}

void	Character::unequip(int idx)
{
	if (this->_storage[idx] == NULL)
		return ;
	else
	{
		for (size_t i = 0; i < 100; i++)
		{
			if (this->_ground[i] == NULL)
			{
				this->_ground[i] = this->_storage[idx];
				this->_storage[idx] = NULL;

				std::cout << "-> " << this->_name << " unequip item" << std::endl;
				return ;
			}
		}
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_storage[idx] != NULL)
		this->_storage[idx]->use(target);
	else
		std::cout << "-> " << "spell not found" << std::endl;
}