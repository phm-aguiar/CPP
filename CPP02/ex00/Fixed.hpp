/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:10:02 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/18 15:14:45 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
// Class declaration
class Fixed {
 public:
  Fixed();
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &rhs);
  ~Fixed();
  int getRawBits( void ) const;
  void setRawBits( int const raw );

 private:
  int _value;
  static const int _fractionalBits = 8;
};

#endif // FIXED_HPP_
