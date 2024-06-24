
#include "Fixed.hpp"

// Default constructor
Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Constructor with int

Fixed::Fixed(int const value)
{
	this->_value = value << this->_fractionalBits;
	std::cout << this->_value << std::endl;
	std::cout << "Int constructor called" << std::endl;
}

// Constructor with float

Fixed::Fixed(float const value)
{
	this->_value = roundf(value * (1 << this->_fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
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

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

// Copy assignment overload
Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_value = rhs._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}
// Operator overloads

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return (this->_value + rhs._value);
}
Fixed Fixed::operator-(const Fixed &rhs) const
{
	return (this->_value - rhs._value);
}
Fixed Fixed::operator*(const Fixed &rhs) const
{
	return (this->_value * rhs._value);
}
Fixed Fixed::operator/(const Fixed &rhs) const
{
	return (this->_value / rhs._value);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->_value > other._value);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->_value < other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->_value <= other._value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->_value != other._value);
}
