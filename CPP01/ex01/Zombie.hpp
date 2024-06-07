/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:44:02 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/05 17:51:39 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

# include <iostream>

class Zombie
{
  public:
	Zombie();
	~Zombie();
	Zombie(const Zombie &other);
	Zombie &operator=(const Zombie &rhs);
	void announce(void);
	void setName(std::string name);

  private:
	std::string name;
};

Zombie* zombieHorde( int N, std::string name );
#endif // ZOMBIE_HPP_
