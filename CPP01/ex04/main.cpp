/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:41:00 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/10 15:24:12 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

bool	ft_error(std::ifstream *filename, std::string s1)
{
	if (s1.empty())
	{
		std::cout << "Error: empty string" << std::endl;
		return (true);
	}
	if (!filename->is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return (true);
	}
	return (false);
}

std::string ft_replace(std::string str, std::string old, std::string New, int index)
{
	std::string new_str; 
	
	new_str = str.substr(0, index);
	new_str += New;
	new_str += str.substr(index + old.length());
	return (new_str);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream file(filename.c_str());
	if (ft_error(&file, s1))
		return (1);
	std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	while (content.find(s1) != std::string::npos)
		content = ft_replace(content, s1, s2, content.find(s1));
	filename += ".replace";
	std::ofstream newfile(filename.c_str());
	newfile << content;
	file.close();
	newfile.close();
	return (0);
}
