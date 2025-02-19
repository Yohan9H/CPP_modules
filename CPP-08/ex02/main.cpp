/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 08:30:40 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/05 15:24:02 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "\n--------------- MutantStack ---------------\n" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top-> " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size-> " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	


	std::cout << "\n--------------- VERIF REEL STL ---------------\n" << std::endl;


	std::list<int> mstack2;

	mstack2.push_back(5);
	mstack2.push_back(17);

	std::cout << "top-> " << mstack2.back() << std::endl;

	mstack2.pop_back();

	std::cout << "size-> " << mstack2.size() << std::endl;

	mstack2.push_back(3);
	mstack2.push_back(5);
	mstack2.push_back(737);
	mstack2.push_back(0);

	std::list<int>::iterator it2 = mstack2.begin();
	std::list<int>::iterator ite2 = mstack2.end();

	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::list<int> s2(mstack2);
	
	return 0;
}