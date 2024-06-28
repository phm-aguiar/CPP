
#include "ScavTrap.hpp"

std::string colorsS[6] = {YELLOW, CYAN, GREEN, BLUE, MAGENTA, WHITE};
// Default constructor
ScavTrap::ScavTrap(std::string nome) : ClapTrap(nome)
{
	this->_name = nome;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap " << this->_name << " is alive!" << RESET << std::endl;
	return ;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
	return ;
}

// Copy assignment overload
ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
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
ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap " << this->_name << " is destroyed!" << RESET << std::endl;
	return ;

}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap " << this->_name << " has entered in Gate keeper mode!" << RESET << std::endl;
	return ;
}
void ScavTrap::attack(const std::string &target)
{
	if(this->_hitPoints == 0 || this->_energyPoints == 0)
	{
		std::cout << BOLDRED << "ScavTrap " << this->_name << " is knocked out" << RESET << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << colorsS[std::rand() % 6] << "ScavTrap " << this->_name << " attacks " << target << RESET << BOLDRED << " using a bamboo pole" <<" causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
}