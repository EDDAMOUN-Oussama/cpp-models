/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oeddamou <oeddamou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 09:51:22 by oeddamou          #+#    #+#             */
/*   Updated: 2026/01/14 09:51:23 by oeddamou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = Account::_nbAccounts++;
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
			  << _amount << ";created" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits << ";withdrawals:"
			  << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
	std::time_t now = std::time(nullptr);
	std::tm *tm = std::localtime(&now);
	std::cout << "[" << std::put_time(tm, "%Y%m%d_%H%M%S") << "] ";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"
			  << _amount << ";deposit:" << deposit
			  << ";amount:" << _amount + deposit << ";nb_deposits:"
			  << ++(_nbDeposits) << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:"
				  << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "index:" << _accountIndex << ";p_amount:"
			  << _amount << ";withdrawal:" << withdrawal << ";amount:"
			  << _amount - withdrawal << ";nb_withdrawals:"
			  << ++(_nbWithdrawals) << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int Account::checkAmount(void) const
{
	return (_amount);
}
void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
			  << ";deposits:" << _nbDeposits << ";withdrawals:"
			  << _nbWithdrawals << std::endl;
}