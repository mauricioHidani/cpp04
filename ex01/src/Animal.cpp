/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:29:46 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 18:44:48 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("Animal") {
	std::cout << "Standard builder: The animal was born" << std::endl;
}

Animal::Animal(const std::string& type): _type(type) {
	std::cout << "Builder by attribute: The animal was born" << std::endl;
}

Animal::Animal(const Animal& other): _type(other.getType()) {
	std::cout << "copy builder: The animal was born" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		_type = other.getType();
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Destructor: The animal was died" << std::endl;
}

std::string Animal::getType(void) const {
	return _type;
}

void Animal::setType(const std::string& type) {
	_type = type;
}

void Animal::makeSound(void) const {
	std::cout << *this << ": noise" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Animal &obj) {
	out << "Type: " << obj.getType();
	return out;
}
