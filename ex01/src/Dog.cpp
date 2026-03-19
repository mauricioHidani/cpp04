/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:41:13 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/19 17:52:35 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void): Animal() {
	_brain = new Brain();
	_type = "Dog";

	std::cout << "The dog was adopted" << std::endl;
}

Dog::Dog(const Dog &other): Animal() {
	_type = other._type;
	for (size_t i = 0; i < 100; i++)
		_brain->setIdea(i, other._brain->getIdea(i));
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "The dog is missing" << std::endl;
}

std::string	Dog::getIdea(const size_t idx) const {
	if (idx > 100) {
		std::cout << "Went beyond the scope of ideas" << std::endl;
		return _brain->getIdea(100);
	}
	return NULL;
}

void	Dog::setIdea(const size_t idx, const std::string &idea) {
	if (idx > 100) {
		std::cout << "Went beyond the scope of ideas" << std::endl;
		return ;
	}
	_brain->setIdea(idx, idea);
}

void	Dog::makeSound(void) const {
	std::cout << *this << ": ruff ruff" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Dog &obj) {
	out << "Type: " << obj.getType() << std::endl;
	out << "Ideas: " << std::endl;
	for (size_t i = 0; i < 100 && obj.getIdea(i).compare("Default idea") != 0; i++)
		out << "💡 " << obj.getIdea(i) << std::endl;
	return out;
}
