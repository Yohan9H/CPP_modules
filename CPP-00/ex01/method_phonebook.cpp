/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method_phonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 07:18:35 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/05 16:21:45 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//	Getters

int		PhoneBook::getIndexCreateNewContact() const
{
	return (index_tab);
}

//	Setters

void	PhoneBook::setIndexCreateNewContact(int index)
{
	index_tab = index;
}

// Others

void	PhoneBook::addContact(PhoneBook &myBook) // add verif ctr-D in getline a voir
{
	std::string	input;
	int idx = myBook.getIndexCreateNewContact();
	if (idx > 8)
		idx = 0;

	std::cout << "First Name : ";
	std::getline(std::cin, input);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setFirstName(input);

	std::cout << "Last Name : ";
	std::getline(std::cin, input);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setLastName(input);

	std::cout << "Nick Name : ";
	std::getline(std::cin, input);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setNickName(input);

	std::cout << "Phone Number : ";
	std::getline(std::cin, input);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setPhoneNumber(input);

	std::cout << "Darkest Secret : ";
	std::getline(std::cin, input);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setDarkestSecret(input);

	myBook.setIndexCreateNewContact(idx + 1);
}

void	PhoneBook::showRepo(PhoneBook myBook)
{
	int	nb_ct = myBook.getIndexCreateNewContact();
	std::string str;

	std::cout << "=============================================\n";
	std::cout << "|Index     |First Name|Last Name |Nick Name |\n";
	std::cout << "=============================================\n";
	for (int i = nb_ct; i <= 8; i++)
	{
		std::cout << "| " << i << "        |";
		str = myBook.tab[i].getFirstName();
		if (str.length() > 10)
		std::cout << "  ";
	}
}
