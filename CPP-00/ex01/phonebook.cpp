/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:58:09 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/04 06:59:04 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add_action(PhoneBook mybook, std::string input)
{
	(void)mybook;
	(void)input;
}

void	search_action(PhoneBook mybook, std::string input)
{
	(void)mybook;
	(void)input;
}

void	exit_action(PhoneBook mybook, std::string input)
{
	(void)mybook;
	(void)input;
}

int	main()
{
	PhoneBook	myBook;
	std::string	input;

	while (input.empty() == true)
	{
		std::cout << "PHONEBOOK : ";
		if (!std::getline(std::cin, input))
			return ((std::cout << std::endl), 1);
		if (input == "ADD")
		{
			add_action(myBook, input);
			input = "";
		}
			
		else if (input == "SEARCH")
		{
			search_action(myBook, input);
			input = "";
		}
		else if (input == "EXIT")
			exit_action(myBook, input);
		else
			input = "";
	}
}
