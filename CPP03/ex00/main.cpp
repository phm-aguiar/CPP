/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:30:41 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/24 15:42:58 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	int	random;

	std::srand(std::time(NULL) << 16 | std::time(NULL));
	ClapTrap claptrap("Claptrap");
	ClapTrap claptrap2("shaulin matador de porco");
	ClapTrap claptrap3("junin do pneu");
	claptrap.attack("junin do pneu");
	claptrap2.attack("Claptrap");
	claptrap3.attack("cleiton");
	for (int i = 0; i < 11; i++)
	{
		random = std::rand() % 2;
		switch (random)
		{
		case 0:
			claptrap.attack("junin do pneu");
			claptrap2.attack("Claptrap");
			claptrap3.attack("shaulin matador de porco");
			claptrap.takeDamage(claptrap.getAttackDamage());
			claptrap2.takeDamage(claptrap2.getAttackDamage());
			claptrap3.takeDamage(claptrap3.getAttackDamage());
			break ;
		case 1:
			claptrap.beRepaired(1);
			claptrap2.beRepaired(1);
			claptrap3.beRepaired(1);
			break ;
		}
	}
	claptrap2.takeDamage(50);
	return (0);
}
