/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:27 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/07 19:47:34 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Default constructor
HumanA::HumanA()
{
	return ;
}

// Copy constructor
HumanA::HumanA(const HumanA &other)
{
	*this = other;
	return ;
}

// Copy assignment overload
HumanA &HumanA::operator=(const HumanA &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
    this->_weapon = rhs._weapon;
	}
	return (*this);
}

// Default destructor
HumanA::~HumanA()
{
	return ;
}
