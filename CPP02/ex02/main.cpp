/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:18:00 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/24 13:42:07 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

void	testOperators(void)
{
	if (Fixed(2) > Fixed(1))
		std::cout << "test greater" << std::endl;
	if (Fixed(1) < Fixed(2))
		std::cout << "test lesser" << std::endl;
	if (Fixed(2) >= Fixed(1))
		std::cout << "test greater equal" << std::endl;
	if (Fixed(1) <= Fixed(1))
		std::cout << "test lesser equal" << std::endl;
	if (Fixed(2) == Fixed(2))
		std::cout << "test equal" << std::endl;
	if (Fixed(2) != Fixed(1))
		std::cout << "test different" << std::endl;
}

void	testIncrement(Fixed &a, Fixed const &b)
{
	std::cout << "Normal number " << a << std::endl;
	std::cout << "Pre increment " << ++a << std::endl;
	std::cout << "After pre increment " << a << std::endl;
	std::cout << "Post increment " << a++ << std::endl;
	std::cout << "After post increment " << a << std::endl;
	std::cout << "b value " << b << std::endl;
	std::cout << "Max operation " << Fixed::max(a, b) << std::endl;
	std::cout << "Min operation " << Fixed::min(a, b) << std::endl;
}

void	testArithmeticOperators(void)
{
	std::cout << "Sum 2 + 3 = " << (Fixed(2) + Fixed(3)) << std::endl;
	std::cout << "Sub 2 - 3 = " << (Fixed(2) - Fixed(3)) << std::endl;
	std::cout << "Div 2 / 3 = " << (Fixed(2) / Fixed(3)) << std::endl;
	std::cout << "Mult 2 * 3 = " << (Fixed(2) * Fixed(3)) << std::endl;
}

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed a2;
	Fixed const b2(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << std::endl;
	std::cout << "arithmetic operators" << std::endl;
	std::cout << std::endl;
	testArithmeticOperators();
	std::cout << std::endl;
	std::cout << "comparison operators" << std::endl;
	std::cout << std::endl;
	testOperators();
	std::cout << std::endl;
	std::cout << "increment operators" << std::endl;
	std::cout << std::endl;
	testIncrement(a, b);
	return (0);
}