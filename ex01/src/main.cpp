/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:35:28 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 19:02:29 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	{
		// Test 1
		std::cout << std::endl << "Test 1" << std::endl;
		Animal	*cat = new Cat();
		Animal	*dog = new Dog();
	
		cat->makeSound();
		dog->makeSound();
	
		delete cat;
		delete dog;
	}
	{
		// Test 2
		std::cout << std::endl << "Test 2" << std::endl;
		const size_t	size = 10;
		Animal*			animals[size];

		for (size_t i = 0; i < size; i++) {
			if (i < (size / 2))
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		for (size_t i = 0; i < size; i++)
			delete animals[i];
	}
	{
		// Test 3
		std::cout << std::endl << "Test 3" << std::endl;
		
		Dog	original;
		original.setIdea(0, "I love bones");

		Dog	copy = original;
		copy.setIdea(0, "I love going on outings");

		std::cout << "Original: " << original.getIdea(0) << std::endl;
		std::cout << "Copy: " << copy.getIdea(0) << std::endl;
	}

	return 0;
}
