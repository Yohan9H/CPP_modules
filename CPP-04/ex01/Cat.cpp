/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:35:36 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 16:00:47 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// **************** Constructeur ****************

Cat::Cat()
	: Animal(),
	  _type("cat"),
	  _Brain(new Brain)
{
	std::cout << "Default constructor 'Cat' called" << std::endl;
}

Cat::Cat(const Cat &src)
	: Animal(),
	  _type(src._type),
	  _Brain(new Brain(*src._Brain))
{
	std::cout << "Copy constructor 'Cat' called" << std::endl;
}


// **************** Destructeur ****************

Cat::~Cat()
{
	std::cout << "Destructor 'Cat' called" << std::endl;
	delete this->_Brain;
}


// **************** Surcharge ****************

Cat	&Cat::operator=(const Cat &src)
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

void	Cat::makeSound() const
{
	std::cout << "Miaouuu!" << std::endl;
}

const std::string	&Cat::getType() const
{
	return this->_type;
}

void		Cat::show_begin_brain() const
{
	for (size_t i = 0; i < 5; i++)
		std::cout << this->_Brain->get_one_ideas(i) << std::endl;
}