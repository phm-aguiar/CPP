/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:19 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/07 19:46:43 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Default constructor
HumanB::HumanB(const std::string &name)
{
	return ;
}

// Copy constructor
HumanB::HumanB(const HumanB &other)
{
	*this = other;
	return ;
}

// Copy assignment overload
HumanB &HumanB::operator=(const HumanB &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_weapon = rhs._weapon;
	}
	return (*this);
}

// Default destructor
HumanB::~HumanB()
{
	return ;
}
