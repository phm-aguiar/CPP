/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:53:22 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/03 17:48:53 by phenriq2         ###   ########.fr       */
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
	std::string newInput = "";
	while (true)
	{
		std::cout << GREEN << "Comandos disponíveis: ADD, SEARCH, EXIT" << RESET << std::endl;
		std::cout << "Digite um comando: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << RED << "\nEOF recebido, saindo do programa." << RESET << std::endl;
			break ;
		}
		newInput = ftToUpper(input);
		if (newInput == "ADD")
			phonebook.add();
		else if (newInput == "SEARCH")
			phonebook.search();
		else if (newInput == "EXIT")
			break ;
	}
	return (0);
}
