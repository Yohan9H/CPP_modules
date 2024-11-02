/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:35:55 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/02 16:28:25 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>

class	Contact
{
	private:
		// int			index_create;
		std::string first_name;
		std::string	last_name;
		std::string nickname;
		// int phonenumber;
		std::string darkest_secret;
	public:
};

class	PhoneBook
{
	private: 
		Contact	tab[8];
	public:
	// int		index_create_new_contact;
};

#endif