/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method_phonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 07:18:35 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/06 09:28:43 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

//	Getters

int		PhoneBook::getNbContact() const
{
	return (nb_contact);
}

int		PhoneBook::getIndex() const
{
	return (index);
}

//	Setters

void	PhoneBook::setNbContact(int nb)
{
	nb_contact = nb;
}

void	PhoneBook::setIndex(int idx)
{
	index = idx;
}

// Others

void	PhoneBook::addContact(PhoneBook &myBook)// add verif ctr-D in getline a voir
{
	std::string	input;
	int idx = myBook.getIndex() % 8;

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

	myBook.setIndex ((idx + 1) % 8);
	int	increase = myBook.getNbContact();
	if (myBook.getNbContact() < 8)
		myBook.setNbContact(increase + 1);
	
}

void	PhoneBook::showRepo(PhoneBook &myBook)
{
	int	nb_ct = myBook.getNbContact();
	std::string str;

	std::cout << "============================================\n";
	std::cout << "     Index|First Name| Last Name| Nick Name \n";
	std::cout << "============================================\n";
	for (int i = 0; i < nb_ct; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";

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
