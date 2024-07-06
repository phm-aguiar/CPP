
#include "Includes.hpp"

// Default constructor
Brain::Brain()
{
	std::cout << CYAN << "Brain constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "I have no idea what is going on!";
	}
}

Brain::Brain(const Brain &other)
{
	*this = other;
	return ;
}

// Copy assignment overload
Brain &Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return (*this);
}

// Default destructor
Brain::~Brain()
{
	std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
	{
		return (this->ideas[index]);
	}
	return ("");
}

