/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contats.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:04:49 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/04 16:15:56 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contats.hpp>

Contats::Contats()
{
	this->_nome = this->_sobrenome = this->_numCont = this->_secret = this->_nickname = "";
}
Contats::~Contats()
{
}
Contats &Contats::operator=(const Contats &backup)
{
	if (this != &backup)
	{
		this->_nome = backup._nome;
		this->_sobrenome = backup._sobrenome;
		this->_numCont = backup._numCont;
		this->_secret = backup._secret;
		this->_nickname = backup._nickname;
	}
	return (*this);
}
Contats::Contats(const Contats &copia)
{
	*this = copia;
}

void Contats::setNome(const std::string nome)
{
	this->_nome = nome;
}

void Contats::setSobrenome(const std::string sobrenome)
{
	this->_sobrenome = sobrenome;
}

void Contats::setNickname(const std::string nickname)
{
	this->_nickname = nickname;
}

void Contats::setNumCont(const std::string numCont)
{
	this->_numCont = numCont;
}

void Contats::setSecret(const std::string secret)
{
	this->_secret = secret;
}


std::string Contats::getNome()
{
	return (this->_nome);
}

std::string Contats::getSobrenome()
{
	return (this->_sobrenome);
}

std::string Contats::getNumCont()
{
	return (this->_numCont);
}

std::string Contats::getNickname()
{
	return (this->_nickname);
}

std::string Contats::getSecret()
{
	return (this->_secret);
}

void Contats::printCont(size_t index)
{
	if (this->_nome.empty())
		return ;
	std::cout << std::setw(10) << index << "|";
	if (this->_nome.length() > 10)
		std::cout << std::setw(10) << this->_nome.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_nome << "|";
	if (this->_sobrenome.length() > 10)
		std::cout << std::setw(10) << this->_sobrenome.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << this->_sobrenome << "|";
	if (this->_nickname.length() > 10)
		std::cout << std::setw(10) << this->_nickname.substr(0, 9) + "." << std::endl;
	else
		std::cout << std::setw(10) << this->_nickname << std::endl;
}
