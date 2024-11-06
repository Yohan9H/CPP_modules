/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:06:21 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/06 15:52:09 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts()
{
	std::cout << "getNbAccounts" << std::endl;
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	std::cout << "getTotalAmount" << std::endl;
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	std::cout << "getNbDeposits" << std::endl;
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	std::cout << "getNbWithdrawals" << std::endl;
	return (_totalNbWithdrawals);

}

void	Account::displayAccountsInfos()
{
	std::cout << "displayAccountsInfos" << std::endl;

}

Account::Account(int initial_deposit) : _accountIndex(initial_deposit)
{

}

Account::~Account()
{
	
}

void	Account::makeDeposit(int deposit)
{
	(void)deposit;
	std::cout << "makeDeposit" << std::endl;

}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	std::cout << "makeWithdrawal" << std::endl;
	return (0);
}

int	Account::checkAmount() const
{
	std::cout << "checkAmount" << std::endl;
	return (0);

}

void	Account::displayStatus() const
{
	std::cout << "displayStatus" << std::endl;
}

void	Account::_displayTimestamp()
{
	std::cout << "_displayTimestamp" << std::endl;
}