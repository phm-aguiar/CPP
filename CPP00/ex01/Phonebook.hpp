/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:37:02 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/01 20:31:19 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contats.hpp>
#include <sstream>
#include <limits>
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
class Phonebook
{
	Contats _contatos[8];

  public:
	Phonebook();
	~Phonebook();
	Phonebook(const Phonebook& copia);
	Phonebook& operator=(const Phonebook& backup);
	void add(void);
	void search(void);
};
