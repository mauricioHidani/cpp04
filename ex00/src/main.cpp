/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:00:52 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:25:35 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {
	Animal			*animal = new Animal();
	Animal			*dog = new Dog();
	Animal			*cat = new Cat();

	WrongAnimal		*wrongAnimal = new WrongAnimal();
	WrongAnimal		*wrongCat = new WrongCat();

	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete animal;
	delete dog;
	delete cat;

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}
