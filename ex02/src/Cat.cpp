/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:42:08 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/19 17:52:11 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal() {
	_brain = new Brain();
	_type = "Cat";

	std::cout << "The cat it's up and running" << std::endl;
}

Cat::Cat(const Cat &other): Animal() {
	_type = other._type;
	_brain = other._brain;
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
	std::cout << *this << ": meow meow" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Cat &obj) {
	out << "Type: " << obj.getType() << std::endl;
	out << "Ideas: " << std::endl;
	for (size_t i = 0; i < 100 && obj.getIdea(i).compare("Default idea") != 0; i++)
		out << "💡 " << obj.getIdea(i) << std::endl;
	return out;
}
