/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:36:48 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 16:10:18 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// **************** Constructeur ****************

Dog::Dog()
	: Animal(),
	  _type("dog"),
	  _Brain(new Brain)
{
	std::cout << "Default constructor 'Dog' called" << std::endl;
}

Dog::Dog(const Dog &src)
	: Animal(),
	  _type(src._type),
	  _Brain(new Brain(*src._Brain))
{
	std::cout << "Copy constructor 'Dog' called" << std::endl;
}


// **************** Destructeur ****************

Dog::~Dog()
{
	std::cout << "Destructor 'Dog' called" << std::endl;
	delete this->_Brain;
}


// **************** Surcharge ****************

Dog	&Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		std::cout << "assignement" << std::endl;
		this->_type = src._type;
		this->_Brain = new Brain(*src._Brain);
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

void		Dog::show_begin_brain() const
{
	for (size_t i = 0; i < 5; i++)
		std::cout << this->_Brain->get_one_ideas(i) << std::endl;
}