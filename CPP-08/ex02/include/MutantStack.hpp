/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 08:30:45 by yohurteb          #+#    #+#             */
/*   Updated: 2024/12/05 15:14:41 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iterator>
#include <exception>
#include <algorithm>
#include <list>
#include <vector>
#include <stack>
#include <deque>

template <typename T> 
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator 		iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;

		MutantStack();
		MutantStack(const MutantStack &src);
		~MutantStack();

		MutantStack	&operator=(const MutantStack &src);

		iterator		begin();
		iterator		end();
		const_iterator	begin() const;
		const_iterator	end() const;
};

#include "MutantStack.tpp"