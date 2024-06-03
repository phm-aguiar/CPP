/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:53:22 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/01 21:19:38 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>

std::string ftToUpper(const std::string str)
{
	std::string upper = "";
	for (size_t i = 0; i < str.length(); i++)
		upper += toupper(str[i]);
	return (upper);
}

int	main(void)
{
	Phonebook	phonebook;

	std::string input;
	while (1)
	{
		std::cout << GREEN << "Comandos disponíveis: ADD, SEARCH, EXIT" << RESET << std::endl;
		std::cout << "Digite um comando: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\nEOF recebido, saindo do programa." << std::endl;
			break ;
		}
		input = ftToUpper(input);
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break ;
		std::cin.clear();
	}
	return (0);
}
