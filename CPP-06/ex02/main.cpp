/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:28:01 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/30 09:17:27 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>


Base	*generate()
{
	int i = std::rand() % 3;

	switch (i)
	{
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	}
	return NULL;
}

void	identify(Base *p)
{
	Base	*verif = NULL;

	verif = dynamic_cast<A*>(p);
	if (verif)
	{
		std::cout << "*p is class 'A'" << std::endl;
		return;
	}

	verif = dynamic_cast<B*>(p);
	if (verif)
	{
		std::cout << "*p is class 'B'" << std::endl;
		return;
	}
	
	verif = dynamic_cast<C*>(p);
	if (verif)
	{
		std::cout << "*p is class 'C'" << std::endl;
		return;
	}

	std::cout << "error *p" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&verif_A = dynamic_cast<A&>(p);
		(void)verif_A;
		std::cout << "&p is class 'A'" << std::endl;
	}
	catch (...)
	{

	}

	try
	{
		B	&verif_B = dynamic_cast<B&>(p);
		(void)verif_B;
		std::cout << "&p is class 'B'" << std::endl;
	}
	catch (...)
	{

	}

	try
	{
		C	&verif_C = dynamic_cast<C&>(p);
		(void)verif_C;
		std::cout << "&p is class 'C'" << std::endl;
	}
	catch (...)
	{

	}
}


//******************************************************************** */


int main()
{
	std::srand(std::time(0));
	Base	*ptr = generate();
	Base	*ref = generate();

	identify(ptr);
	identify(*ref);

	delete ptr;
	delete ref;
}