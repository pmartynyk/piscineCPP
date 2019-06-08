/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:54:10 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/04 16:54:11 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(int initial_deposit)
{
    this->_nbAccounts = this->_nbAccounts + 1;
    this->_totalAmount = this->_totalAmount + initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = this->_nbAccounts;
    this->_amount = initial_deposit;

    _displayTimestamp();
	std::cout << "index:" << (_accountIndex - 1) <<
		";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    Account::_nbAccounts--;
    _displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
}

int		Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int		Account::getTotalAmount( void )
{
	return _totalAmount;
}

int		Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void    Account::_displayTimestamp(void)
{
    static time_t		t;
	static struct tm	*now;

	if (!now)
	{
		t = time(0);
		now = localtime(&t);
	}

	std::cout << '['
			<< now->tm_year + 1900
			<< std::setw(2) << std::setfill('0') << now->tm_mon
			<< std::setw(2) << std::setfill('0') << now->tm_mday
			<< '_'
			<< std::setw(2) << std::setfill('0') << now->tm_hour
			<< std::setw(2) << std::setfill('0') << now->tm_min
			<< std::setw(2) << std::setfill('0') << now->tm_sec
			<< "] ";
}

void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
	std::cout << "accounts:" << _nbAccounts <<
		";total:" << _totalAmount <<
		";deposits:" << _totalNbDeposits <<
		";withdrawals:" << _totalNbWithdrawals <<
		std::endl;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) <<
		";amount:" << this->_amount << ";deposits:" << this->_nbDeposits <<
		";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    this->_amount = this->_amount + deposit;
    this->_nbDeposits = this->_nbDeposits + 1;
    this->_totalAmount = this->_totalAmount + deposit;
    this->_totalNbDeposits = this->_totalNbDeposits + 1;
    _displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) << ";p_amount:" << (this->_amount - deposit) << 
		";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:";
    if (_amount < withdrawal)
    {
		std::cout << "refused" << std::endl;
		return (false);
	}
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
	return (true);
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;