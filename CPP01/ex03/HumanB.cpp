/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:19 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/09 16:25:42 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Default constructor
HumanB::HumanB(const std::string &name) : _name(name) , _weapon(NULL)
{
}

// Copy constructor
HumanB::HumanB(const HumanB &other)
{
	*this = other;
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
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
void HumanB::attack(void) const
{

	if (!this->_weapon)
		std::cout << this->_name << " has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}