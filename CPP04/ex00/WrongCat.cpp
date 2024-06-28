
#include "WrongCat.hpp"
#include "Includes.hpp"

// Default constructor
WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << MAGENTA <<"Wrong Cat constructor called" << RESET << std::endl;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &other)
	: WrongAnimal(other)
{
	*this = other;
	return ;
}

// Copy assignment overload
WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if (this->getType() != rhs.getType())
		WrongAnimal::operator=(rhs);
	return (*this);
}

// Default destructor
WrongCat::~WrongCat()
{
	std::cout << RED << "Wrong Cat destructor called" << RESET <<std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << YELLOW << "Meow Meow" << RESET << std::endl;
}
