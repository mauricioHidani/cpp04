/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:29:46 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:03:52 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("Animal") {
}

Animal::~Animal(void) {
}

std::string	Animal::getType(void) const {
	return _type;
}

void	Animal::makeSound(void) const {
	std::cout << *this << ": noise" << std::endl;
}

Animal	&Animal::operator=(const Animal &other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Animal &obj) {
	out << obj.getType();
	return out;
}
