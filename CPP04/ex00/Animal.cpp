
#include "Animal.hpp"
#include "Includes.hpp"

Animal::Animal()
	: type("Animal")
{
	std::cout << MAGENTA << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(std::string type)
	: type(type)
{
	std::cout << MAGENTA <<"Animal constructor called" << RESET <<std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this->type != rhs.type)
		type = rhs.type;
	return (*this);
}

// Default destructor
Animal::~Animal()
{
	std::cout << RED << "Animal destructor called" << RESET << std::endl;
}
void Animal::makeSound() const
{
	std::cout << BLUE << "Animal sound" << RESET << std::endl;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType() const
{
	return (this->type);
}