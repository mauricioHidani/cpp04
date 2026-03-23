/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:41:13 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/22 19:16:53 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void): Animal() {
	_brain = new Brain();
	_type = "Dog";

	std::cout << "The dog was adopted" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other) {
	_type = other._type;
	_brain = new Brain(*other._brain);
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "The dog is missing" << std::endl;
}

std::string	Dog::getIdea(const size_t idx) const {
	if (idx >= 100) {
		std::cout << "Went beyond the scope of ideas" << std::endl;
		return std::string();
	}
	return _brain->getIdea(idx);
}

void	Dog::setIdea(const size_t idx, const std::string &idea) {
	if (idx > 100) {
		std::cout << "Went beyond the scope of ideas" << std::endl;
		return ;
	}
	_brain->setIdea(idx, idea);
}

void	Dog::makeSound(void) const {
	std::cout << _type << ": ruff ruff" << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
	if (this != &other) {
		Animal::operator=(other);
		_type = other._type;
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Dog &obj) {
	out << "Type: " << obj.getType() << std::endl;
	out << "Ideas: " << std::endl;
	for (size_t i = 0; i < 100 && obj.getIdea(i).compare("Default idea") != 0; i++)
		out << "💡 " << obj.getIdea(i) << std::endl;
	return out;
}
