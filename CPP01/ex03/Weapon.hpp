/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:03 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/10 11:09:01 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP_
#define WEAPON_HPP_

// Class declaration

#include <iostream>


class Weapon {
 public:
  Weapon(std::string type);
  Weapon(const Weapon &other);
  Weapon &operator=(const Weapon &rhs);
  ~Weapon();
  void setType(std::string type);
  std::string const &getType() const;
  
 private:
    std::string _type;
  
};

#endif // WEAPON_HPP_
