/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:41:13 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 20:24:18 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void): Animal() {
	_brain = new Brain();
	_type = "Dog";

	std::cout << "The dog was adopted" << std::endl;
}

Dog::Dog(const Dog &other): Animal() {
	_type = other._type;
	for (size_t i = 0; i < 100; i++)
		_brain->setIdea(i, other._brain->getIdea(i));
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "The dog is missing" << std::endl;
}

std::string	Dog::getIdea(const size_t idx) const {
	if (idx > 100) {
		std::cout << "The index has surpassed 100 points" << std::endl;
		return _brain->getIdea(100);
	}
	return NULL;
}

void	Dog::makeSound(void) const {
	std::cout << *this << ": ruff ruff" << std::endl;
}
