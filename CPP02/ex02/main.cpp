/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:18:00 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/19 08:37:36 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed e;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
e = Fixed(45.2f);
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "e is " << e << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
std::cout << "e is " << e.toInt() << " as integer" << std::endl;
std::cout << "a is " << a.toFloat() << " as float" << std::endl;
std::cout << "b is " << b.toFloat() << " as float" << std::endl;
std::cout << "c is " << c.toFloat() << " as float" << std::endl;
std::cout << "d is " << d.toFloat() << " as float" << std::endl;
std::cout << "e is " << e.toFloat() << " as float" << std::endl;
return 0;
}