/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:24:52 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 14:21:20 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"

// ******************** Constructeur ********************

Cure::Cure()
	: AMateria(),
	  _type("cure")
{
	std::cout << "Default constructor 'Cure' called" << std::endl;
}

Cure::Cure(const Cure &src)
	: AMateria(),
	  _type(src._type)
{
	std::cout << "Copy constructor 'Cure' called" << std::endl;
}

Cure::Cure(std::string &type)
	: AMateria(), 
	  _type(type)
{
	std::cout << "Copy_string constructeur 'Cure' called" << std::endl;
}


// ******************** Destructeur ********************

Cure::~Cure()
{
	std::cout << "Destructor 'Cure' called" << std::endl;
}


// ******************** Surcharge ********************

Cure	&Cure::operator=(const Cure &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}


// ******************** Methods ********************

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria	*Cure::clone() const
{
	return new Cure;
}