/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:16:10 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/10 16:07:33 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::Harl(const Harl &other)
{
	*this = other;
}

Harl &Harl::operator=(const Harl &rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

Harl::~Harl()
{
}

void	string_to_lower(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::tolower(str[i]);
}

int	get_index(std::string level)
{
	std::string levels[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			return (i);
	return (-1);
}

void Harl::complain(std::string level)
{
	int	index;

	string_to_lower(level);
	index = -1;
	void (Harl::*complaints[4])() = {&Harl::debug, &Harl::info, &Harl::warning,
		&Harl::error};
	index = get_index(level);
	switch (index)
	{
	case DEBUG:
		(this->*complaints[index++])();
		std::cout << std::endl;
	case INFO:
		(this->*complaints[index++])();
		std::cout << std::endl;
	case WARNING:
		(this->*complaints[index++])();
		std::cout << std::endl;
	case ERROR:
		(this->*complaints[index])();
		std::cout << std::endl;
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}