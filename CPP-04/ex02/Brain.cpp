/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:21:17 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 15:14:47 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// **************** Constructeur ****************

Brain::Brain()
{
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = "???";
	std::cout << "Default constructor 'Brain' called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	std::cout << "Copy constructor 'Brain' called" << std::endl;
}


// **************** Destructeur ****************

Brain::~Brain()
{
	std::cout << "Destructor 'Brain' called" << std::endl;
}


// **************** Surcharge ****************

Brain	&Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		for (size_t i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return *this; 
}


// **************** Methods ****************

std::string	Brain::get_one_ideas(int i) const
{
	return this->_ideas[i];
}

void	Brain::set_one_ideas(int i, std::string src)
{
	this->_ideas[i] = src;
}