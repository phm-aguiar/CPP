/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:42:10 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/05 17:49:10 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
	return ;
}

Zombie::Zombie(const Zombie &other)
{
	*this = other;
	return ;
}

Zombie &Zombie::operator=(const Zombie &rhs)
{
	if (this != &rhs)
		this->name = rhs.name;
	return (*this);
}

Zombie::~Zombie()
{
	std::cout << this->name << " is being destroyed" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
