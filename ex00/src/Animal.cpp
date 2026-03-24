/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:29:46 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 17:19:01 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("Animal") {
}

Animal::Animal(const std::string &type): _type(type) {
}

Animal::Animal(const Animal &other): _type(other.getType()) {
}

Animal::~Animal(void) {}

Animal&	Animal::operator=(const Animal &other) {
	if (this != &other)
		_type = other.getType();
	return *this;
}

std::string	Animal::getType(void) const {
	return _type;
}

void Animal::setType(const std::string &type) {
	_type = type;
}

void	Animal::makeSound(void) const {
	std::cout << *this << ": noise" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Animal &obj) {
	out << obj.getType();
	return out;
}
