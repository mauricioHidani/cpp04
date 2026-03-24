/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:41:13 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 17:25:48 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {}

Dog::Dog(const std::string& type): Animal(type) {}

Dog::Dog(const Dog& other): Animal(other.getType()) {}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		_type = other.getType();
	return *this;
}

Dog::~Dog(void) {}

void	Dog::makeSound(void) const {
	std::cout << *this << ": ruff ruff" << std::endl;
}
