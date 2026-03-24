/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:29:46 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 19:22:34 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): _type("Animal") {
	std::cout << "Standard builder: The animal was born" << std::endl;
}

AAnimal::AAnimal(const std::string& type): _type(type) {
	std::cout << "Builder by attribute: The animal was born" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other): _type(other.getType()) {
	std::cout << "copy builder: The animal was born" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other)
		_type = other.getType();
	return *this;
}

AAnimal::~AAnimal(void) {
	std::cout << "Destructor: The animal was died" << std::endl;
}

std::string AAnimal::getType(void) const {
	return _type;
}

void AAnimal::setType(const std::string& type) {
	_type = type;
}

std::ostream	&operator<<(std::ostream &out, const AAnimal &obj) {
	out << "Type: " << obj.getType();
	return out;
}
