/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:41:13 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 19:12:23 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void): Animal() {
	_brain = new Brain();
	_type = "Dog";

	std::cout << "The dog was adopted" << std::endl;
}

Dog::~Dog(void) {
	delete _brain;
	
	std::cout << "The dog is missing" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << *this << ": ruff ruff" << std::endl;
}
