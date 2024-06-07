/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:44:02 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/05 17:49:21 by phenriq2         ###   ########.fr       */
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
    void setName(std::string name);
	void announce(void);

  private:
	std::string name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
#endif // ZOMBIE_HPP_
