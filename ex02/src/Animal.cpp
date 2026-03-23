/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:29:46 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/22 13:01:48 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("Animal") {
	std::cout << "The animal was born" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "The animal was died" << std::endl;
}

std::string	Animal::getType(void) const {
	return _type;
}

std::ostream	&operator<<(std::ostream &out, const Animal &obj) {
	out << "Type: " << obj.getType();
	return out;
}
