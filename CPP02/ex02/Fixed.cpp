
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
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Default destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
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
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
// Operator overloads

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}
Fixed Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}
Fixed Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}
Fixed Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
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

Fixed Fixed::operator++(int)
{
	Fixed tmp(this->_value * toFloat());
	this->_value+=1;
	return (tmp);
}

Fixed &Fixed::operator++(void)
{
	this->_value += 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(this->_value * toFloat());
	this->_value-=1;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->_value-=1;
	return (*this);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if(a > b)
		return a;
	else
		return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a < b)
		return a;
	else
		return b;
}

Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
	if(a > b)
		return a;
	else
		return b;
}

Fixed Fixed::min(Fixed const &a, Fixed const &b)
{
	if(a < b)
		return a;
	else
		return b;
}