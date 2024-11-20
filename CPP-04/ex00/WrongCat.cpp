/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:52:44 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 11:08:43 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// **************** Constructeur ****************

WrongCat::WrongCat()
	: WrongAnimal(),
	  _type("wrong_cat")
{
	std::cout << "Default constructor 'WrongCat' called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
	: WrongAnimal(),
	  _type(src._type)
{
	std::cout << "Copy constructor 'WrongCat' called" << std::endl;
}


// **************** Destructeur ****************

WrongCat::~WrongCat()
{
	std::cout << "Destructor 'WrongCat' called" << std::endl;
}


// **************** Surcharge ****************

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this; 
}

// **************** Methods ****************

void	WrongCat::makeSound() const
{
	std::cout << "Miaouuu!" << std::endl;
}

const std::string	&WrongCat::getType() const
{
	return this->_type;
}