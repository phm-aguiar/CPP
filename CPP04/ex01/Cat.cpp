/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:35:39 by phenriq2          #+#    #+#             */
/*   Updated: 2024/07/04 18:44:09 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Includes.hpp"

// Default constructor
Cat::Cat()
	: Animal("Cat")
{
	brain = new Brain();
	std::cout << MAGENTA << "Cat constructor called" << RESET << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	*this = other;
	return ;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs)
{
	if (this->getType() != rhs.getType())
	{
		Animal::operator=(rhs);
		*brain = *rhs.brain;
	}
	return (*this);
}

// Default destructor
Cat::~Cat()
{
	delete	brain;

	std::cout << RED << "Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << YELLOW << "Meow Meow" << RESET << std::endl;
}

Brain *Cat::getBrain() const
{
	return (brain);
}