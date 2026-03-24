/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:42:08 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 17:23:07 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") {}

Cat::Cat(const std::string& type): Animal(type) {}

Cat::Cat(const Cat& other): Animal(other.getType()) {}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
		_type = other.getType();
	return *this;
}

Cat::~Cat(void) {}

void	Cat::makeSound(void) const {
	std::cout << *this << ": meow meow" << std::endl;
}
