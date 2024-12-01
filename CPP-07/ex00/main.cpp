/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 09:54:43 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/01 10:23:45 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() 
{
	long a = 2;
	long b = 3;
	ft_swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ft_min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ft_max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	ft_swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ft_min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ft_max( c, d ) << std::endl;
	return 0;
}