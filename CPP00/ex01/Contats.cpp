/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contats.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:04:49 by phenriq2          #+#    #+#             */
/*   Updated: 2024/05/31 19:04:17 by phenriq2         ###   ########.fr       */
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
Contats &Contats::operator=(Contats &backup)
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
Contats::Contats(Contats &copia)
{
	*this = copia;
}

void Contats::setNome(std::string nome)
{
	this->nome = nome;
}

void Contats::setSobrenome(std::string sobrenome)
{
	this->sobrenome = sobrenome;
}

void Contats::setNumCont(std::string numCont)
{
	this->numCont = numCont;
}

void Contats::setSecret(std::string secret)
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