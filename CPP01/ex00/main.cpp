/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:13:45 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/05 16:24:00 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main (void)
{
	Zombie *zombie = newZombie("Michael Jackson");
	zombie->announce();
	randomChump("Osama Bin Laden");
	delete zombie;
	return (0);
}