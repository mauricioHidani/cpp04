/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:49:35 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/23 19:30:59 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void): AMateria("cure") {
}

Cure::Cure(const Cure &other): AMateria(other.getType()) {
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other)
		type = other.type;
	return *this;
}

Cure::~Cure(void) {
}

AMateria* Cure::clone(void) const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *"
			  << std::endl;
}
