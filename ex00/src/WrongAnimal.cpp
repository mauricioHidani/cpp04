/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:11:49 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:13:58 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal") {
}

WrongAnimal::~WrongAnimal(void) {
}

std::string	WrongAnimal::getType(void) const {
	return _type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << *this << ": noise" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const WrongAnimal &obj) {
	out << obj.getType();
	return out;
}
