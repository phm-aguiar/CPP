/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:37:27 by phenriq2          #+#    #+#             */
/*   Updated: 2024/05/31 19:10:07 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>

Phonebook::Phonebook()
{
	for (int i = 0; i < 8; i++)
		this->_contatos[i] = Contats();
}
Phonebook::~Phonebook()
{
}
Phonebook &Phonebook::operator=(Phonebook &backup)
{
	if (this != &backup)
	{
		for (int i = 0; i < 8; i++)
			this->_contatos[i] = backup._contatos[i];
	}
	return (*this);
}
Phonebook::Phonebook(Phonebook &copia)
{
	*this = copia;
}



void Phonebook::add()
{
	static int index= 0;
	if (index == 8)
		index = 0;
	std::string nome, sobrenome, num_cont, secret;
	std::cout << "Digite o nome: ";
	std::getline(std::cin, nome);
	std::cout << "Digite o sobrenome: ";
	std::getline(std::cin, sobrenome);
	std::cout << "Digite o numero de contato: ";
	std::getline(std::cin, num_cont);
	std::cout << "Digite o segredo: ";
	std::getline(std::cin, secret);
	_contatos[index].setNome(nome);
	index++;
}

void Phonebook::search()
{
}
