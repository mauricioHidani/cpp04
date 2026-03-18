/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:41:13 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:03:57 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal() {
	_type = "Dog";
}

Dog::~Dog(void) {
}

void	Dog::makeSound(void) const {
	std::cout << *this << ": ruff ruff" << std::endl;
}
