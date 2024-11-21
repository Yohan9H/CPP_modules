/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:24:57 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/21 11:13:59 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.hpp"

// ******************** Constructeur ********************

AMateria::AMateria()
{
	std::cout << "Default constructor 'AMateria' called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	this->_type = src._type;
	std::cout << "Copy constructor 'AMateria' called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "Copy_string constructeur 'AMateria' called" << std::endl;
}


// ******************** Destructeur ********************

AMateria::~AMateria()
{
	std::cout << "Destructor 'AMaterial' called" << std::endl;
}


// ******************** Surcharge ********************

AMateria	&AMateria::operator=(const AMateria &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}


// ******************** Methods ********************

const	std::string	&AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "*Not a Character for use a Materia*" << std::endl;
}