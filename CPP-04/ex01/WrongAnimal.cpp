/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:52:40 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 10:58:29 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// **************** Constructeur ****************

WrongAnimal::WrongAnimal()
	: _type("wrong_animal")
{
	std::cout << "Default constructor 'WrongAnimal' called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
	: _type(src._type)
{
	std::cout << "Copy constructor 'WrongAnimal' called" << std::endl;
}


// **************** Destructeur ****************

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor 'WrongAnimal' called" << std::endl;
}


// **************** Surcharge ****************

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this; 
}


// **************** Methods ****************

void	WrongAnimal::makeSound() const
{
	std::cout << "*** NO SOUND ***" << std::endl;
}

const std::string	&WrongAnimal::getType() const
{
	return this->_type;
}