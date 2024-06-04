/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:20:10 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/04 11:04:04 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <fstream>
#include <iostream>

int	main(void)
{
	std::ofstream file;
	file.open("test.txt", std::ios::out);

	if(!file.is_open()){
		std::cout << "Error opening file" << std::endl;
		return 1;
	}
	
	file << "Hello World!" << std::endl;
	file << "This is a test file." << std::endl;
	file << "Goodbye!" << std::endl;
	file.close();
	return 0;
}

// int	main(void)
// {
// 	std::time_t tempo = std::time(0);
// 	std::tm *tempo_formatado = std::localtime(&tempo);

// 	char buffer[17];
// 	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", tempo_formatado);
// 	std::cout << "[" << buffer << "]" << std::endl;
// }