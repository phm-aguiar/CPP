/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:27 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/09 16:27:04 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::HumanA(const HumanA &other) : _name(other._name), _weapon(other._weapon) {}

HumanA &HumanA::operator=(const HumanA &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}


HumanA::~HumanA() {}

void HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
