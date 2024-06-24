/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:22 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/09 16:26:02 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
# define HUMANA_HPP_
# include "Weapon.hpp"
# include <iostream>
# include <string>
class HumanA
{
  public:
	HumanA(std::string name, Weapon &weapon);
	HumanA(const HumanA &other);
	HumanA &operator=(const HumanA &rhs);
	~HumanA();
	void attack() const;

  private:
	std::string _name;
	Weapon &_weapon;
};

#endif // HUMANA_HPP_
