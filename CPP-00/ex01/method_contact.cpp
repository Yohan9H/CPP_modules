/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 07:34:13 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/06 09:03:13 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//	Getters

std::string	Contact::getFirstName() const
{
	return (first_name);
}

std::string	Contact::getLastName() const
{
	return (last_name);
}

std::string	Contact::getNickName() const
{
	return (nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (phonenumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (darkest_secret);
}


// Setters

void	Contact::setFirstName(std::string first)
{
	first_name = first;
}

void	Contact::setLastName(std::string last)
{
	last_name = last;
}

void	Contact::setNickName(std::string nick)
{
	nickname = nick;
}

void	Contact::setPhoneNumber(std::string number)
{
	phonenumber = number;
}

void	Contact::setDarkestSecret(std::string secret)
{
	darkest_secret = secret;
}