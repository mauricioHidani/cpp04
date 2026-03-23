/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:25:40 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/23 18:56:36 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string &type):
type(type) {
}

AMateria::~AMateria(void) {
}

std::string AMateria::getType(void) const {
	return type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
