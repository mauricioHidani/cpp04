/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:42:08 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/22 19:16:40 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal() {
	_brain = new Brain();
	_type = "Cat";

	std::cout << "The cat it's up and running" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other) {
	_type = other._type;
	_brain = new Brain(*other._brain);
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << "The cat ran away from home" << std::endl;
}

std::string	Cat::getIdea(const size_t &idx) const {
	if (idx > 100) {
		std::cerr << "" << std::endl;
		return std::string();
	}
	return _brain->getIdea(idx);
}

void	Cat::setIdea(const size_t idx, const std::string &idea) {
	if (idx > 100) {
		std::cout << "Went beyond the scope of ideas" << std::endl;
		return ;
	}
	_brain->setIdea(idx, idea);
}

void	Cat::makeSound(void) const {
	std::cout << _type << ": meow meow" << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
	if (this != &other) {
		Animal::operator=(other);
		_type = other._type;
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

std::ostream	&operator<<(std::ostream &out, const Cat &obj) {
	out << "Type: " << obj.getType() << std::endl;
	out << "Ideas: " << std::endl;
	for (size_t i = 0; i < 100 && obj.getIdea(i).compare("Default idea") != 0; i++)
		out << "💡 " << obj.getIdea(i) << std::endl;
	return out;
}
