/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contats.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:11:10 by phenriq2          #+#    #+#             */
/*   Updated: 2024/05/31 19:07:33 by phenriq2         ###   ########.fr       */
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
	Contats(Contats &copia);
	Contats &operator=(Contats &backup);
	void setNome(std::string nome);
	void setSobrenome(std::string sobrenome);
	void setNumCont(std::string numCont);
	void setSecret(std::string secret);
	std::string getNome();
	std::string getSobrenome();
	std::string getNumCont();
	std::string getSecret();
};