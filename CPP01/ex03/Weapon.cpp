/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:01:55 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/10 11:09:09 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

// Default constructor
Weapon::Weapon(std::string type) : _type(type){}

// Copy constructor
Weapon::Weapon(const Weapon &other)
{
	*this = other;
}

// Copy assignment overload
Weapon &Weapon::operator=(const Weapon &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

// Default destructor
Weapon::~Weapon(){}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const &Weapon::getType() const
{
	return (this->_type);
}