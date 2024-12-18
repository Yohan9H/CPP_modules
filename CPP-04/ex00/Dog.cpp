/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:36:48 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 09:38:03 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// **************** Constructeur ****************

Dog::Dog()
	: Animal(),
	  _type("dog")
{
	std::cout << "Default constructor 'Dog' called" << std::endl;
}

Dog::Dog(const Dog &src)
	: Animal(),
	  _type(src._type)
{
	std::cout << "Copy constructor 'Dog' called" << std::endl;
}


// **************** Destructeur ****************

Dog::~Dog()
{
	std::cout << "Destructor 'Dog' called" << std::endl;
}


// **************** Surcharge ****************

Dog	&Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this; 
}

// **************** Methods ****************

void	Dog::makeSound() const
{
	std::cout << "Waouf!" << std::endl;
}

const std::string	&Dog::getType() const
{
	return this->_type;
}