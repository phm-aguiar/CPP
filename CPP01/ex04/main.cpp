/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:35:28 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/09 18:23:35 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

bool	ft_error_tratament(std::ifstream &file, const std::string &s1,
		const std::string &s2)
{
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: Empty string" << std::endl;
		return (true);
	}
	if (file.fail())
	{
		std::cerr << "Error: File not found" << std::endl;
		return (true);
	}
	return (false);
}

std::string ft_replace(std::string str, std::string old, std::string New, size_t index){
	std::string newStr = str.substr(0, index);
	newStr += New;
	newStr += str.substr(index + old.length());
	return newStr;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <string_to_replace> <string_to_replace_with>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::ifstream file(filename.c_str());
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (ft_error_tratament(file, s1, s2))
	{
		file.close();
		return (1);
	}
	std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>()); // Read file content
	std::cout << fileContent.find(s1) << std::endl;
	while (fileContent.find(s1) != std::string::npos)
		fileContent = ft_replace(fileContent, s1, s2, fileContent.find(s1));
	filename = filename + ".replace";
	std::ofstream outputFile(filename.c_str());
	outputFile << fileContent;
	file.close();
	return (0);
}