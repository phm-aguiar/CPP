/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:03 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/09 16:27:57 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
# define WEAPON_HPP_

# include <iostream>
#include <string>

// Class declaration
class Weapon
{
  public:
	Weapon(std::string type);
	Weapon(const Weapon &other);
	Weapon &operator=(const Weapon &rhs);
	~Weapon();
	void setType(std::string type);
	const std::string &getType() const;

  private:
	std::string _type;
};

#endif // WEAPON_HPP_
