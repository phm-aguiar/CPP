
#include "WrongAnimal.hpp"
#include "Includes.hpp"

WrongAnimal::WrongAnimal()
	: type("wrongAnimal")
{
	std::cout << MAGENTA << "Wrong Animal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	: type(type)
{
	std::cout << MAGENTA <<"Wrong Animal constructor called" << RESET <<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this->type != rhs.type)
		type = rhs.type;
	return (*this);
}

// Default destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "Wrong Animal destructor called" << RESET << std::endl;
}
void WrongAnimal::makeSound() const
{
	std::cout << BLUE << "Wrong Animal sound" << RESET << std::endl;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}