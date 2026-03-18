/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:42:08 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:04:01 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal() {
	_type = "Cat";
}

Cat::~Cat(void) {
}

void	Cat::makeSound(void) const {
	std::cout << *this << ": meow meow" << std::endl;
}
