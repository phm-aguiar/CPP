/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:01:55 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/05 19:01:56 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

// Default constructor
Weapon::Weapon()
{
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
	(void)rhs;
	return (*this);
}

// Default destructor
Weapon::~Weapon()
{
	return ;
}
