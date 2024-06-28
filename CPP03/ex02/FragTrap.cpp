
#include "FragTrap.hpp"

std::string colorsF[6] = {YELLOW, CYAN, GREEN, BLUE, MAGENTA, WHITE};
// Default constructor
FragTrap::FragTrap(std::string nome) : ClapTrap(nome)
{
	this->_name = nome;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << colorsF[std::rand() % 6] << "FragTrap " << this->_name << " is alive!" << RESET << std::endl;
	return ;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
	return ;
}

// Copy assignment overload
FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	if(this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

// Default destructor
FragTrap::~FragTrap()
{
	std::cout << RED << "FragTrap " << this->_name << " is destroyed!" << RESET << std::endl;
	return ;

}

void FragTrap::attack(const std::string &target)
{
	if(this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << BOLDRED << "FragTrap " << this->_name << " is knocked out" << RESET << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << colorsF[std::rand() % 6] << "FragTrap " << this->_name << " attacks " << target << RESET << BOLDRED << " using a music box" <<" causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << YELLOW << "FragTrap " << this->_name << " is asking for a high five!" << RESET << std::endl;
	return ;
}