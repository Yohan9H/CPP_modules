/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:35:55 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/02 15:49:29 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>

class	Contact
{
	// int			index_create;
	std::string first_name;
	std::string	last_name;
	std::string nickname;
	// int phonenumber;
	std::string darkest_secret;
};

class	PhoneBook
{
	Contact	tab[8];
	// int		index_create_new_contact;
};

#endif