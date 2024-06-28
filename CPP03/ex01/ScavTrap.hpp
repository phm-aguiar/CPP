
#ifndef SCAVTRAP_HPP_
# define SCAVTRAP_HPP_
# include "ClapTrap.hpp"
# include <iostream>

// Class declaration
class ScavTrap : public ClapTrap
{
  public:
	void guardGate();
	void attack(const std::string& target);
	ScavTrap(std::string nome);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &rhs);
	~ScavTrap();
};

#endif // SCAVTRAP_HPP_
