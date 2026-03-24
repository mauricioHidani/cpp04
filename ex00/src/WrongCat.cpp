/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:19:16 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 17:40:41 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal() {
	_type = "WrongCat";
}

WrongCat::WrongCat(const std::string& type) {
	_type = type;
}

WrongCat::WrongCat(const WrongCat& other) {
	_type = other.getType();
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
		_type = other.getType();
	return *this;
}

WrongCat::~WrongCat(void) {
}

void	WrongCat::makeSound(void) const {
	std::cout << *this << ": meow meow" << std::endl;
}
