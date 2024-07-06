/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:30:41 by phenriq2          #+#    #+#             */
/*   Updated: 2024/07/02 16:22:26 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	int	random;

	std::srand(std::time(NULL) << 16 | std::time(NULL));
	ClapTrap claptrap("Claptrap");
	ClapTrap claptrap2("shaulin matador de porco");
	ClapTrap claptrap3("junin do pneu");
	ScavTrap scavtrap("Scavtrap");
	FragTrap fragtrap("Fragtrap");
	claptrap.attack("junin do pneu");
	claptrap2.attack("Claptrap");
	claptrap3.attack("cleiton");
	fragtrap.attack("Scavtrap");
	for (int i = 0; i < 11; i++)
	{
		random = std::rand() % 4;
		switch (random)
		{
		case 0:
			claptrap.attack("junin do pneu");             
			claptrap2.attack("Claptrap");                 
			scavtrap.attack("Claptrap");                  
			claptrap3.attack("shaulin matador de porco"); 
			claptrap3.attack("Scavtrap");
			claptrap.takeDamage(claptrap2.getAttackDamage());
			claptrap.takeDamage(scavtrap.getAttackDamage());
			claptrap2.takeDamage(claptrap3.getAttackDamage());
			claptrap3.takeDamage(claptrap.getAttackDamage());
			scavtrap.takeDamage(claptrap3.getAttackDamage());
			break ;
		case 1:
			claptrap.beRepaired(1);
			claptrap2.beRepaired(1);
			claptrap3.beRepaired(1);
			scavtrap.beRepaired(1);
			break ;
		case 2:
			scavtrap.guardGate();
			break ;
		case 3:
			fragtrap.highFivesGuys();
			break ;
		}
	}
	claptrap2.takeDamage(50);
	fragtrap.takeDamage(50);
	return (0);
}
