/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:53:22 by phenriq2          #+#    #+#             */
/*   Updated: 2024/05/31 19:01:19 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>
#include <sstream>

int	main(void)
{
	Phonebook phonebook;
	std::string input;
	int i;

	i = 0;
	while (1)
	{
		std::cout << "Digite um comando: ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break;
	}
	return (0);
	
}
