
#include "ClapTrap.hpp"

std::string colors[6] = {YELLOW, CYAN, GREEN, BLUE, MAGENTA, WHITE};
// Default constructor
ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << colors[std::rand() % 6] << "ClapTrap " << this->_name << " is alive!" << RESET << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

// Copy assignment overload
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

// Default destructor
ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap " << this->_name << " is destroyed!" << RESET << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if(this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << BOLDRED << "ClapTrap " << this->_name << " is knocked out" << RESET << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << colors[std::rand() % 6] << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount > (unsigned int)this->_hitPoints)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << colors[std::rand() % 6] << "ClapTrap " << this->_name << " takes "<< RESET << RED << amount << " points of damage!" << RESET << std::endl;
	if(this->_hitPoints == 0)
	{
		std::cout << BOLDRED << "ClapTrap " << this->_name << " is already dead!" << RESET << std::endl;
		return;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << colors[std::rand() % 6] << "ClapTrap " << this->_name << " is repaired by "<< RESET  << GREEN << amount << " points!" << RESET << std::endl;
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}