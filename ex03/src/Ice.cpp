/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:28:50 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/23 18:56:20 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void):
AMateria("ice") {
}

Ice::Ice(const Ice &other):
AMateria(other.getType()) {
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other)
		type = other.type;
	return *this;
}

Ice::~Ice(void) {
}

AMateria* Ice::clone(void) const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" 
			  << std::endl;
}
