/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:59:50 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/23 20:07:06 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void): _name("so-and-so") {
	for (size_t i = 0; i < 4; i++)
		_invetory[i] = NULL;
}

Character::Character(const std::string &name): _name(name) {
	for (size_t i = 0; i < 4; i++)
		_invetory[i] = NULL;
}

Character::Character(const Character& other): _name(other._name) {
	for (size_t i = 0; i < 4; i++)
		_invetory[i] = other._invetory[i] ?
			other._invetory[i]->clone() : NULL;
}

Character& Character::operator=(const Character &other) {
	if (this != &other) {
		_name = other._name;

		for (size_t i = 0; i < 4; i++) {
			delete _invetory[i];
			_invetory[i] = other._invetory[i] ? 
				other._invetory[i]->clone() : NULL;
		}
	}
	return *this;
}

Character::~Character(void) {
	for (size_t i = 0; i < 4; i++)
		delete _invetory[i];
}

const std::string& Character::getName(void) const {
	return _name;
}

void Character::equip(AMateria *m) {
	if (m == NULL)
		return ;

	for (size_t i = 0; i < 4; i++) {
		if (_invetory[i] == NULL) {
			_invetory[i] = m;
			break ; 
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		_invetory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && _invetory[idx])
		_invetory[idx]->use(target);
}
