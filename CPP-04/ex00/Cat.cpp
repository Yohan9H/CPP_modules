/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:35:36 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 11:13:53 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// **************** Constructeur ****************

Cat::Cat()
	: Animal()
{
	Cat::_type = "cat";
	std::cout << "Default constructor 'Cat' called" << std::endl;
}

Cat::Cat(const Cat &src)
	: Animal(),
	  _type(src._type)
{
	std::cout << "Copy constructor 'Cat' called" << std::endl;
}


// **************** Destructeur ****************

Cat::~Cat()
{
	std::cout << "Destructor 'Cat' called" << std::endl;
}


// **************** Surcharge ****************

Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this; 
}

// **************** Methods ****************

void	Cat::makeSound() const
{
	std::cout << "Miaouuu!" << std::endl;
}

const std::string	&Cat::getType() const
{
	return this->_type;
}