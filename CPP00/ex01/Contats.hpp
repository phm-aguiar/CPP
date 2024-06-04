/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contats.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:11:10 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/03 18:08:49 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

class Contats
{
	std::string _nome;
	std::string _sobrenome;
	std::string _nickname;
	std::string _numCont;
	std::string _secret;

  public:
	Contats();
	~Contats();
	Contats(const Contats &copia);
	Contats &operator=(const Contats &backup);
	void printCont(size_t index);
	void setNome(const std::string nome);
	void setSobrenome(const std::string sobrenome);
	void setNumCont(std::string numCont);
	void setSecret(const std::string secret);
	void setNickname(const std::string nickname);
	// void setIndex(int index);
	std::string getNickname();
	std::string getNome();
	std::string getSobrenome();
	std::string getNumCont();
	std::string getSecret();
	int getIndex();

};