/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:19:16 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:27:14 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal() {
	_type = "WrongCat";
}

WrongCat::~WrongCat(void) {
}

void	WrongCat::makeSound(void) const {
	std::cout << *this << ": meow meow" << std::endl;
}
