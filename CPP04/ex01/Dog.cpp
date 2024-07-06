
#include "Includes.hpp"

// Default constructor
Dog::Dog()
	: Animal("Dog")
{
	brain = new Brain();
	std::cout << MAGENTA << "Dog constructor called" << RESET << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other)
	: Animal(other), brain(new Brain(*other.brain))
{
	*this = other;
	return ;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs)
{
	if (this->getType() != rhs.getType())
	{
		Animal::operator=(rhs);
		*brain = *rhs.brain;
	}
	return (*this);
}

// Default destructor
Dog::~Dog()
{
	delete	brain;

	std::cout << RED << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << GREEN << "Woof Woof" << RESET << std::endl;
}

Brain *Dog::getBrain() const
{
	return (brain);
}