/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:35:55 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/07 09:32:26 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include <cstdlib>

class	Contact
{
	private:
		std::string first_name;
		std::string	last_name;
		std::string nickname;
		std::string	phonenumber;
		std::string darkest_secret;

	public:
		Contact();

		// Getters
		std::string		getFirstName() const;
		std::string		getLastName() const;
		std::string		getNickName() const;
		std::string		getPhoneNumber() const;
		std::string		getDarkestSecret() const;

		// Setters
		void			setFirstName(std::string fisrt);
		void			setLastName(std::string last);
		void			setNickName(std::string nick);
		void			setPhoneNumber(std::string number);
		void			setDarkestSecret(std::string secret);
};

class	PhoneBook
{
	private:
		Contact	tab[8];
		int		nb_contact;
		int		index;

	public:
		PhoneBook(int nb, int index) : nb_contact(nb), index(index) {

		};

		// Getters
		int				getNbContact() const;
		int				getIndex() const;

		// Setters
		void			setNbContact(int nb);
		void			setIndex(int idx);

		// Others
		int				addContact(PhoneBook &myBook);
		int				showRepo(PhoneBook &myBook);
};

#endif