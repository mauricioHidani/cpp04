/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 19:08:32 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 19:23:35 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	AAnimal	*cat = new Cat();
	AAnimal	*dog = new Dog();

	std::cout << "Cat type: " << cat->getType() << std::endl;
	cat->makeSound();

	std::cout << "Dog type: " << dog->getType() << std::endl;
	dog->makeSound();

	delete cat;
	delete dog;

	return 0;
}