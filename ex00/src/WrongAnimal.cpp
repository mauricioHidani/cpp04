/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:11:49 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 17:35:54 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal") {}

WrongAnimal::WrongAnimal(const std::string& type): _type(type) {}

WrongAnimal::WrongAnimal(const WrongAnimal& other): _type(other.getType()) {}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		_type = other.getType();
	return *this;
}

WrongAnimal::~WrongAnimal(void) {}

std::string	WrongAnimal::getType(void) const {
	return _type;
}

void WrongAnimal::setType(const std::string& type) {
	_type = type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << *this << ": noise" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const WrongAnimal &obj) {
	out << obj.getType();
	return out;
}
