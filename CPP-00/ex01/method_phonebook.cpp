/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method_phonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 07:18:35 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/06 08:28:09 by yohurteb         ###   ########.fr       */
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

void	PhoneBook::addContact(PhoneBook &myBook)// add verif ctr-D in getline a voir
{
	std::string	input;
	int idx = myBook.getIndexCreateNewContact() % 8;

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

	myBook.setIndexCreateNewContact((idx + 1) % 8);
}

void	PhoneBook::showRepo(PhoneBook &myBook)
{
	int	nb_ct = myBook.getIndexCreateNewContact();
	std::string str;

	std::cout << "============================================\n";
	std::cout << "     Index|First Name| Last Name| Nick Name \n";
	std::cout << "============================================\n";
	for (int i = 0; i < nb_ct; i++)
	{
		std::cout << std::setw(10) << i << "|";

		str = myBook.tab[i].getFirstName();
		if (str.length() > 10)
			std::cout << str.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << str;
		std::cout << "|";

		str = myBook.tab[i].getLastName();
		if (str.length() > 10)
			std::cout << str.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << str;
		std::cout << "|";

		str = myBook.tab[i].getNickName();
		if (str.length() > 10)
			std::cout << str.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << std::right << str;
		std::cout << std::endl;
	}
}
