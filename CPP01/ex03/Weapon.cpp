/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:01:55 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/09 16:28:32 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return ;
}

// Copy constructor
Weapon::Weapon(const Weapon &other)
{
	*this = other;
	return ;
}

// Copy assignment overload
Weapon &Weapon::operator=(const Weapon &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

// Default destructor
Weapon::~Weapon()
{
	return ;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string &Weapon::getType() const
{
	return (this->_type);
}