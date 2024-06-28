/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:15 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/10 10:50:26 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
# define HUMANB_HPP_
# include "Weapon.hpp"

#include <iostream>
#include <string>


class HumanB
{
  public:
	HumanB(const std::string &name);
	HumanB(const HumanB &other);
	HumanB &operator=(const HumanB &rhs);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack() const;

  private:
	std::string _name;
	Weapon *_weapon;
};

#endif // HUMANB_HPP_