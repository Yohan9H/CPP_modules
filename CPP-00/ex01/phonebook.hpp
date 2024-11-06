/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:35:55 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/06 08:07:50 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>

class	Contact
{
	private:
		int			index_create;
		std::string first_name;
		std::string	last_name;
		std::string nickname;
		std::string	phonenumber;
		std::string darkest_secret;

	public:
		Contact() {
			
		};

		// Getters
		int				getIndexCreate() const;
		std::string		getFirstName() const;
		std::string		getLastName() const;
		std::string		getNickName() const;
		std::string		getPhoneNumber() const;
		std::string		getDarkestSecret() const;

		// Setters
		void			setIndexCreate(int index);
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
		int		index_tab;

	public:
		PhoneBook(int index) : index_tab(index) {

		};

		// Getters
		int		getIndexCreateNewContact() const;

		// Setters
		void	setIndexCreateNewContact(int index);

		// Others
		void	addContact(PhoneBook &myBook);
		void	showRepo(PhoneBook &myBook);
};

#endif