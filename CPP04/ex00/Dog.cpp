
#include "Dog.hpp"
#include "Includes.hpp"

// Default constructor
Dog::Dog()
	: Animal("Dog")
{
	std::cout << MAGENTA << "Dog constructor called" << RESET << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other)
{
	*this = other;
	return ;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs)
{
	if (this->getType() != rhs.getType())
		Animal::operator=(rhs);
	return (*this);
}

// Default destructor
Dog::~Dog()
{
	std::cout << RED << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << GREEN << "Woof Woof" << RESET << std::endl;
}