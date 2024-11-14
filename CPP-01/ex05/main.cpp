/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:58:21 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/14 10:42:34 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	myClass;
	myClass.complain("DEBUG");
	myClass.complain("INFO");
	myClass.complain("WARNING");
	myClass.complain("ERROR");
}