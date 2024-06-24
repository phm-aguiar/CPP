/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:37:27 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/04 17:02:03 by phenriq2         ###   ########.fr       */
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
		this->_contatos[i] = Contats();
}

Phonebook::~Phonebook()
{
}

Phonebook &Phonebook::operator=(const Phonebook &backup)
{
	if (this != &backup)
		for (int i = 0; i < 8; i++)
			this->_contatos[i] = backup._contatos[i];
	return (*this);
}

Phonebook::Phonebook(const Phonebook &copia)
{
	*this = copia;
}

bool Phonebook::isNumber(std::string numCont)
{
	for (size_t i = 0; i < numCont.length(); i++)
		if (!isdigit(numCont[i]))
			return (false);
	return (true);
}

static void	set_Contats(Contats *contato, std::string nome,
		std::string sobrenome, std::string nickname, std::string numCont,
		std::string secret)
{
	contato->setNome(nome);
	contato->setSobrenome(sobrenome);
	contato->setNickname(nickname);
	contato->setNumCont(numCont);
	contato->setSecret(secret);
	std::system("clear");
}

static std::string add_str(std::string var, std::string out, std::string error)
{
	while (var.empty())
	{
		std::cout << GREEN << out << RESET;
		std::getline(std::cin, var);
		if (var.empty())
			ft_error(error);
	}
	return (var);
}

void Phonebook::add()
{
	static int	index = 0;

	std::string nome, sobrenome, nick, secret, numCont;
	if (!std::system("clear") && index == 8)
		index = 0;
	nome = add_str(nome, "add first name: ", "Name cannot be empty");
	sobrenome = add_str(sobrenome, "add last name: ", "Last name cannot be empty");
	nick = add_str(nick, "add nickname: ", "Nickname cannot be empty");
	while (numCont.empty())
	{
		std::cout << "Enter contact number: ";
		std::getline(std::cin, numCont);
		if (!this->isNumber(numCont))
		{
			std::cout << RED << "Invalid contact number" << RESET << std::endl;
			numCont.clear();
			continue ;
		}
		if (numCont.empty())
			ft_error("contact number field cannot be empty");
	}
	secret = add_str(secret, "Enter a darkest secret: ", "the darkest secret cannot be empty");
	set_Contats(&this->_contatos[index], nome, sobrenome, nick, numCont, secret);
	index++;
}

bool	inRange0to7(std::string index)
{
	char	num;

	num = index[0];
	if (index.length() > 1)
	{
		ft_error("Invalid index");
		return (false);
	}
	if (num < '0' || num > '7')
	{
		ft_error("Invalid index");
		return (false);
	}
	return (true);
}

void Phonebook::search()
{
	std::string index;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contatos[i].printCont(i);
	if (this->_contatos[0].getNome().empty())
	{
		ft_error("No contacts cadastrated");
		return ;
	}
	while (index.empty())
	{
		index = add_str(index, "Enter the index of the contact [0 - 7]: ", "Index cannot be empty");
		if (!this->isNumber(index))
		{
			ft_error("Invalid index");
			index = "";
			continue ;
		}
		if (!inRange0to7(index))
			index = "";
	}
	if (this->_contatos[std::atoi(index.c_str())].getNome().empty())
	{
		ft_error("Contact not found");
		return ;
	}
	std::cout << "First name: " << this->_contatos[std::atoi(index.c_str())].getNome() << std::endl;
	std::cout << "Last name: " << this->_contatos[std::atoi(index.c_str())].getSobrenome() << std::endl;
	std::cout << "Nickname: " << this->_contatos[std::atoi(index.c_str())].getNickname() << std::endl;
	std::cout << "Contact number: " << this->_contatos[std::atoi(index.c_str())].getNumCont() << std::endl;
	std::cout << "Dark secret: " << this->_contatos[std::atoi(index.c_str())].getSecret() << std::endl;
}
