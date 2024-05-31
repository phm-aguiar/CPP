/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:37:02 by phenriq2          #+#    #+#             */
/*   Updated: 2024/05/31 19:02:05 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contats.hpp>
#include <iostream>

class Phonebook
{
	Contats _contatos[8];

  public:
	Phonebook();
	~Phonebook();
	Phonebook(Phonebook& copia);
	Phonebook& operator=(Phonebook& backup);
	void add(void);
	void search(void);
};
