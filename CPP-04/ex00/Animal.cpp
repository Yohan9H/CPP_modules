/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:33:13 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 09:37:52 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// **************** Constructeur ****************

Animal::Animal()
	: _type("animal")
{
	std::cout << "Default constructor 'Animal' called" << std::endl;
}

Animal::Animal(const Animal &src)
	: _type(src._type)
{
	std::cout << "Copy constructor 'Animal' called" << std::endl;
}


// **************** Destructeur ****************

Animal::~Animal()
{
	std::cout << "Destructor 'Animal' called" << std::endl;
}


// **************** Surcharge ****************

Animal	&Animal::operator=(const Animal &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this; 
}


// **************** Methods ****************

void	Animal::makeSound() const
{
	std::cout << "*** NO SOUND ***" << std::endl;
}

const std::string	&Animal::getType() const
{
	return this->_type;
}