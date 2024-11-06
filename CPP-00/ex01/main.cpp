/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:58:09 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/05 15:55:32 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main()
{
	PhoneBook	myBook(0);
	std::string	input;

	while (input.empty() == true)
	{
		std::cout << "PHONEBOOK : ";
		if (!std::getline(std::cin, input))
			return ((std::cout << std::endl), 1);
		if (input == "ADD")
		{
			myBook.addContact(myBook);
			input = "";
		}
		else if (input == "SEARCH")
		{
			myBook.showRepo(myBook);
			input = "";
		}
		else if (input == "EXIT")
			break;
		else
			input = "";
	}
}
