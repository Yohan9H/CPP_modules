/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method_phonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 07:18:35 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/04 07:45:49 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//	Getters

int		PhoneBook::getIndexCreateNewContact() const
{
	return (index_create_new_contact);
}

//	Setters

void	PhoneBook::setIndexCreateNewContact(int index)
{
	index_create_new_contact = index;
}
