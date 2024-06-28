/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:14:53 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/24 15:19:19 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

// Includes
#include <iostream>
#include <cstdlib>
#include <ctime>

// Colors
#define YELLOW "\033[33m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define WHITE "\033[37m"
#define RESET "\033[0m"

// bold

#define BOLDRED "\033[1m\033[31m"

// Class declaration
class ClapTrap {
 public:
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &rhs);
  ~ClapTrap();
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  int getAttackDamage(void) const;

 private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDamage;
};

#endif // CLAPTRAP_HPP_
