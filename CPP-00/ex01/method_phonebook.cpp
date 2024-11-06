/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   method_phonebook.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 07:18:35 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/06 11:35:38 by yohurteb         ###   ########.fr       */
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

int	PhoneBook::addContact(PhoneBook &myBook)
{
	std::string	input;
	int idx = myBook.getIndex() % 8;

	std::cout << "First Name : ";
	if (!std::getline(std::cin, input))
		return (EXIT_FAILURE);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setFirstName(input);

	std::cout << "Last Name : ";
	if (!std::getline(std::cin, input))
		return (EXIT_FAILURE);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setLastName(input);

	std::cout << "Nick Name : ";
	if (!std::getline(std::cin, input))
		return (EXIT_FAILURE);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setNickName(input);

	std::cout << "Phone Number : ";
	if (!std::getline(std::cin, input))
		return (EXIT_FAILURE);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setPhoneNumber(input);

	std::cout << "Darkest Secret : ";
	if (!std::getline(std::cin, input))
		return (EXIT_FAILURE);
	if (input.empty() == true)
		input = "empty";
	myBook.tab[idx].setDarkestSecret(input);

	myBook.setIndex ((idx + 1) % 8);
	int	increase = myBook.getNbContact();
	if (myBook.getNbContact() < 8)
		myBook.setNbContact(increase + 1);

	return (EXIT_SUCCESS);
}

int	PhoneBook::showRepo(PhoneBook &myBook)
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
	
	int	idx = -1;
	str = "";
	while (str.empty())
	{
		bool print = true;
		idx = -1;
		std::cout << "Index for more detail : ";
		if (!std::getline(std::cin, str))
			return (EXIT_FAILURE);
		for (size_t x = 0; x < str.length(); x++)
			if (std::isdigit(str[x]) == 0)
			{
				std::cout << "Bad index" << std::endl;
				str = "";
				print = false;
				break;
			}
		std::istringstream iss(str);
		if (!(iss >> idx) && print)
		{
			std::cout << "Bad index" << std::endl;
			str = "";
		}
		else if ((idx < 1 || idx > nb_contact) && print)
		{
			std::cout << "Bad index" << std::endl;
			str = "";
		}
	}
	idx--;
	std::cout << "----\n";
	std::cout << "First Name : " << myBook.tab[idx].getFirstName() << std::endl;
	std::cout << "Last Name : " << myBook.tab[idx].getLastName() << std::endl;
	std::cout << "Nick Name : " << myBook.tab[idx].getNickName() << std::endl;
	std::cout << "Phone Number : " << myBook.tab[idx].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << myBook.tab[idx].getDarkestSecret() << std::endl;
	std::cout << "----\n";

	return (EXIT_SUCCESS);
}
