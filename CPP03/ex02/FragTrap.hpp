
#ifndef FRAGTRAP_HPP_
# define FRAGRAP_HPP_
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

// Class declaration
class FragTrap : public ClapTrap
{
  public:
	void highFivesGuys(void);
	void attack(const std::string& target);
	FragTrap(std::string nome);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &rhs);
	~FragTrap();
};

#endif // SCAVTRAP_HPP_
