/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:42:08 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 20:24:54 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal() {
	_brain = new Brain();
	_type = "Cat";

	std::cout << "The cat it's up and running" << std::endl;
}

Cat::Cat(const Cat &other): Animal() {
	_type = other._type;
	_brain = other._brain;
}

Cat::~Cat(void) {
	delete _brain;

	std::cout << "The cat ran away from home" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << *this << ": meow meow" << std::endl;
}
