/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan.h <yohan.h@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:57:15 by yohan.h           #+#    #+#             */
/*   Updated: 2024/11/08 10:09:09 by yohan.h          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string *ptr_str = &str;
	std::string	&ref_str =  str;

	// print adress
	std::cout << &str << std::endl;
	std::cout << ptr_str << std::endl;
	std::cout << &ref_str << std::endl;

	std::cout << std::endl;

	// print value
	std::cout << str <<  std::endl;
	std::cout << *ptr_str << std::endl;
	std::cout << ref_str << std::endl;
}