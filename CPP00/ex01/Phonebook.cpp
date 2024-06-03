/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:37:27 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/01 21:30:16 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>

void	ft_error(const std::string msg)
{
	std::cout << RED << msg << RESET << std::endl;
}

Phonebook::Phonebook()
{
	for (int i = 0; i < 8; i++)
	{
		this->_contatos[i] = Contats();
	}
}

Phonebook::~Phonebook()
{
}

Phonebook &Phonebook::operator=(const Phonebook &backup)
{
	if (this != &backup)
	{
		for (int i = 0; i < 8; i++)
			this->_contatos[i] = backup._contatos[i];
	}
	return (*this);
}

Phonebook::Phonebook(const Phonebook &copia)
{
	*this = copia;
}

void Phonebook::add()
{
	static int	index = 0;
	long			numCont;

	if (index == 8)
		index = 0;
	std::string nome, sobrenome, secret = "";
	numCont = 0;
	while (nome.empty())
	{
		std::cout << "Digite o nome: ";
		std::getline(std::cin, nome);
		if (nome.empty() || std::cin.eof())
			ft_error("Nome não pode ser vazio");
	}
	while (sobrenome.empty())
	{
		std::cout << "Digite o sobrenome: ";
		std::getline(std::cin, sobrenome);
		if (sobrenome.empty() || std::cin.eof())
			ft_error("Sobrenome não pode ser vazio");
	}
	while (true)
	{
		std::cout << "Digite o numero de contato: ";
		std::cin >> numCont;
		if (std::cin.fail() || std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			ft_error("Numero de contato invalido");
		}
		else
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break ;
		}
	}
	while (secret == "")
	{
		std::cout << "Digite o segredo: ";
		std::getline(std::cin, secret);
		if (secret == "" || std::cin.eof())
			ft_error("Segredo não pode ser vazio");
	}
	_contatos[index].setNome(nome);
	_contatos[index].setSobrenome(sobrenome);
	_contatos[index].setNumCont(numCont);
	_contatos[index].setSecret(secret);
	index++;
}

void Phonebook::search()
{
}
