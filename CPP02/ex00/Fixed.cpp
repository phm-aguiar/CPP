
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment overload
Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_value = rhs._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

// Default destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}