/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:18:27 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/23 18:56:58 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void):
_index(0) {
	for (size_t i = 0; i < 4; i++)
		_learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other):
_index(other._index) {
	for (size_t i = 0; i < 4; i++)
		_learned[i] = other._learned[i] ? 
			other._learned[i]->clone() : NULL;
}

MateriaSource::~MateriaSource(void) {
	for (size_t i = 0; i < 4; i++)
		delete _learned[i];
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (_index < 4)
		_learned[_index++] = materia;
	else if (_index >= 4)
		delete materia;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (size_t i = 0; i < 4; i++)
		if (_learned[i] && _learned[i]->getType() == type)
			return _learned[i]->clone();
	return NULL;
}
