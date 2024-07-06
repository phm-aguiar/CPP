/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:50:06 by phenriq2          #+#    #+#             */
/*   Updated: 2024/07/04 18:47:07 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

std::string intToString(int n)
{
	std::stringstream ss;
	ss << n;
	return (ss.str());
}

void	testAnimal(const Animal *a, std::string msg)
{
	std::cout << std::endl;
	std::cout << msg << std::endl;
	std::cout << "Type: " << a->getType() << std::endl;
	a->makeSound();
}

void	deepCopyTest(void)
{
	Dog		*originalDog;
	Dog		*copiedDog;

	originalDog = new Dog();
	originalDog->setType("Bulldog");
	copiedDog = new Dog(*originalDog);
	originalDog->setType("Poodle");
	if (copiedDog->getType() == "Bulldog")
	{
		std::cout << "Deep copy test passed." << std::endl;
		std::cout << "Original dog type changed: " << originalDog->getType() << std::endl;
		std::cout << "Copied dog type: " << copiedDog->getType() << std::endl;
	}
	else
		std::cout << "Deep copy test failed." << std::endl;
	// brain test
	for (int i = 0; i < 100; i++)
		originalDog->getBrain()->setIdea(i, "Idea " + intToString(i));
	for (int i = 0; i < 100; i++)
	{
		if (originalDog->getBrain()->getIdea(i) != "Idea " + intToString(i))
		{
			std::cout << "Brain test failed." << std::endl;
			delete	originalDog;
			delete	copiedDog;
			return ;
		}
	}
	std::cout << "Brain test passed." << std::endl;
	// Limpeza
	delete	originalDog;
	delete	copiedDog;
}

int	main(void)
{
	const Animal *a = new Animal();
	const Animal *b = new Dog();
	const Animal *c = new Cat();
	const WrongAnimal *y = new WrongAnimal();
	const WrongAnimal *x = new WrongCat();
	Animal *d[4] = {new Dog(), new Cat(), new Dog(), new Cat()};

	// Test for Animal
	testAnimal(a, "Test for Animal");
	testAnimal(b, "Test for Dog");
	testAnimal(c, "Test for Cat");
	// Test for WrongAnimal
	std::cout << std::endl;
	std::cout << "Test for WrongAnimal" << std::endl;
	std::cout << "Type: " << y->getType() << std::endl;
	y->makeSound();
	std::cout << std::endl;
	std::cout << "Test for WrongCat" << std::endl;
	std::cout << "Type: " << x->getType() << std::endl;
	x->makeSound();
	// Test for deep copy
	std::cout << std::endl;
	deepCopyTest();

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete d[i];
	delete a;
	delete b;
	delete c;
	delete y;
	delete x;
	return (0);
}