/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:16:14 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/09 19:17:52 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP_
#define HARL_HPP_
#include <iostream>
#include <string>
// Class declaration
class Harl {
 public:
  Harl();
  Harl(const Harl &other);
  Harl &operator=(const Harl &rhs);
  ~Harl();
  void complain(std::string level);

 private:
 void debug();
 void info();
 void warning();
 void error();
  
};

#endif // HARL_HPP_
