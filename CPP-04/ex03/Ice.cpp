/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:24:49 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/22 08:17:21 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"

// ******************** Constructeur ********************

Ice::Ice()
	: AMateria("ice")
{
	std::cout << "Default constructor 'Ice' called" << std::endl;
}

Ice::Ice(const Ice &src)
	: AMateria(src.getType())
{
	std::cout << "Copy constructor 'Ice' called" << std::endl;
}

Ice::Ice(std::string &type)
	: AMateria(type)
{
	std::cout << "Copy_string constructeur 'Ice' called" << std::endl;
}


// ******************** Destructeur ********************

Ice::~Ice()
{
	std::cout << "Destructor 'Ice' called" << std::endl;
}


// ******************** Surcharge ********************

Ice	&Ice::operator=(const Ice &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}


// ******************** Methods ********************

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria	*Ice::clone() const
{
	return new Ice;
}