/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contats.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:11:10 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/01 21:16:03 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contats
{
	std::string nome;
	std::string sobrenome;
	std::string numCont;
	std::string secret;

  public:
	Contats();
	~Contats();
	Contats(const Contats &copia);
	Contats &operator=(const Contats &backup);
	void setNome(const std::string nome);
	void setSobrenome(const std::string sobrenome);
	void setNumCont(long numCont);
	void setSecret(const std::string secret);
	std::string getNome();
	std::string getSobrenome();
	std::string getNumCont();
	std::string getSecret();
};