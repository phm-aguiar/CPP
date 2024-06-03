/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contats.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:04:49 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/01 21:15:55 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contats.hpp>

Contats::Contats()
{
	this->nome = this->sobrenome = this->numCont = this->secret = "";
}
Contats::~Contats()
{
}
Contats &Contats::operator=(const Contats &backup)
{
	if (this != &backup)
	{
		this->nome = backup.nome;
		this->sobrenome = backup.sobrenome;
		this->numCont = backup.numCont;
		this->secret = backup.secret;
	}
	return (*this);
}
Contats::Contats(const Contats &copia)
{
	*this = copia;
}

void Contats::setNome(const std::string nome)
{
	this->nome = nome;
}

void Contats::setSobrenome(const std::string sobrenome)
{
	this->sobrenome = sobrenome;
}

void Contats::setNumCont(long numCont)
{
	this->numCont = numCont;
}

void Contats::setSecret(const std::string secret)
{
	this->secret = secret;
}

std::string Contats::getNome()
{
	return (this->nome);
}

std::string Contats::getSobrenome()
{
	return (this->sobrenome);
}

std::string Contats::getNumCont()
{
	return (this->numCont);
}

std::string Contats::getSecret()
{
	return (this->secret);
}