/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:50:06 by phenriq2          #+#    #+#             */
/*   Updated: 2024/07/02 11:12:53 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

// tests for the animal class cat and dog
int	main(void)
{
	const Animal *a = new Animal();
	const Animal *b = new Dog();
	const Animal *c = new Cat();
	const WrongAnimal *y = new WrongAnimal();
	const WrongAnimal *x = new WrongCat();


	std::cout << std::endl;
	std::cout << "Test for Animal" << std::endl;
	std::cout << "Type: " << a->getType() << std::endl;
	a->makeSound();
	std::cout << std::endl;
	std::cout << "Test for Dog" << std::endl;
	std::cout << "Type: " << b->getType() << std::endl;
	b->makeSound();
	std::cout << std::endl;
	std::cout << "Test for Cat" << std::endl;
	std::cout << "Type: " << c->getType() << std::endl;
	c->makeSound();
	std::cout << std::endl;
	std::cout << "Test for WrongAnimal" << std::endl;
	std::cout << "Type: " << y->getType() << std::endl;
	y->makeSound();
	std::cout << std::endl;
	std::cout << "Test for WrongCat" << std::endl;
	std::cout << "Type: " << x->getType() << std::endl;
	x->makeSound();
	std::cout << std::endl;
	delete a;
	delete b;
	delete c;
	delete y;
	delete x;
	return (0);
}