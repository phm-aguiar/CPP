/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:16:10 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/09 19:27:49 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Default constructor
Harl::Harl()
{
}

// Copy constructor
Harl::Harl(const Harl &other)
{
	*this = other;
}

// Copy assignment overload
Harl &Harl::operator=(const Harl &rhs)
{
	if (this != &rhs)
		return (*this);
	return (*this);
}

// Default destructor
Harl::~Harl()
{
}

std::string tolower(std::string str)
{
	std::string lower;
	for (size_t i = 0; i < str.size(); i++)
		lower += std::tolower(str[i]);
	return lower;
}

void Harl::complain(std::string level)
{
	level = tolower(level);
	if (level == "debug")
		debug();
	else if (level == "info")
		info();
	else if (level == "warning")
		warning();
	else if (level == "error")
		error();
	else
		std::cout << "Invalid level" << std::endl;
}

// Member function to print debug message

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}