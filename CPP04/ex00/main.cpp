/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:50:06 by phenriq2          #+#    #+#             */
/*   Updated: 2024/06/28 18:59:13 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

// tests for the animal class cat and dog
int	main(void)
{
	const Animal *a = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *w = new WrongAnimal();
	const WrongAnimal *x = new WrongCat();


	std::cout << std::endl;
	std::cout << "Test for Animal" << std::endl;
	std::cout << "Type: " << a->getType() << std::endl;
	a->makeSound();
	std::cout << std::endl;
	std::cout << "Test for Dog" << std::endl;
	std::cout << "Type: " << j->getType() << std::endl;
	j->makeSound();
	std::cout << std::endl;
	std::cout << "Test for Cat" << std::endl;
	std::cout << "Type: " << i->getType() << std::endl;
	i->makeSound();
	std::cout << std::endl;
	std::cout << "Test for WrongAnimal" << std::endl;
	std::cout << "Type: " << w->getType() << std::endl;
	w->makeSound();
	std::cout << std::endl;
	std::cout << "Test for WrongCat" << std::endl;
	std::cout << "Type: " << x->getType() << std::endl;
	x->makeSound();
	std::cout << std::endl;



	
	delete a;
	delete j;
	delete i;
	delete w;
	delete x;
	return (0);
}