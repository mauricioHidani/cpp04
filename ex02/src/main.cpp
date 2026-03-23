/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 19:08:32 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/22 13:08:26 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	Animal	*cat = new Cat();
	Animal	*dog = new Dog();

	std::cout << "Cat type: " << cat->getType() << std::endl;
	cat->makeSound();

	std::cout << "Dog type: " << dog->getType() << std::endl;
	dog->makeSound();

	delete cat;
	delete dog;

	return 0;
}