/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:14:46 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/04 15:58:44 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	this->_nbDeposits = this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed" << std::endl;
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}
int Account::getTotalAmount()
{
	return (_totalAmount);
}
int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::makeDeposit(int deposit)
{
	if (deposit == 0)
		return ;
	if (deposit < 0)
		return ;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";"
				<< "deposit:" << deposit << ";";
	this->_totalAmount += deposit;
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";"
				<< "nb_deposits:" << this->_nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";"
				<< "withdrawal:";
	if (withdrawal == 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	if (withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	std::cout << withdrawal << ";"
				<< "amount:" << this->_amount << ";"
				<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals++;
	return (true);
}
int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	char	buffer[17];

	std::time_t tempo = std::time(0);
	std::tm *tempo_formatado = std::localtime(&tempo);
	std::string str = "[";
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", tempo_formatado);
	str += buffer;
	str += "]";
	std::cout << str << " ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}
