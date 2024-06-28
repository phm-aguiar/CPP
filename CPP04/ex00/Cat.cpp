
#include "Cat.hpp"
#include "Includes.hpp"

// Default constructor
Cat::Cat()
	: Animal("Cat")
{
	std::cout << MAGENTA <<"Cat constructor called" << RESET << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other)
	: Animal(other)
{
	*this = other;
	return ;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs)
{
	if (this->getType() != rhs.getType())
		Animal::operator=(rhs);
	return (*this);
}

// Default destructor
Cat::~Cat()
{
	std::cout << RED << "Cat destructor called" << RESET <<std::endl;
}

void Cat::makeSound() const
{
	std::cout << YELLOW << "Meow Meow" << RESET << std::endl;
}
