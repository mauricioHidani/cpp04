/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:42:08 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 19:23:16 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): AAnimal("Cat"), _brain(new Brain()) {
	std::cout << "Standard builder: The cat it's up and running" << std::endl;
}

Cat::Cat(const std::string& type): AAnimal(type), _brain(new Brain()) {
	std::cout << "Builder by attribute: The cat it's up and running" << std::endl;
}

Cat::Cat(const Cat &other): AAnimal(other) {
	_brain = new Brain(*other.getBrain());
	std::cout << "Copy builder: The cat has already been copied and is working" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		AAnimal::operator=(other);

		if (_brain)
			delete _brain;

		_brain = new Brain(*other.getBrain());
	}
	return *this;
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << "Destructor: The cat ran away from home" << std::endl;
}

Brain* Cat::getBrain(void) const {
	return _brain;
}

std::string	Cat::getIdea(const size_t &idx) const {
	if (idx >= 100) {
		std::cerr << "Went beyond the scope of ideas" << std::endl;
		return std::string("Default idea");
	}
	return _brain->getIdea(idx);
}

void	Cat::setIdea(const size_t idx, const std::string &idea) {
	if (idx >= 100) {
		std::cout << "Went beyond the scope of ideas" << std::endl;
		return ;
	}
	_brain->setIdea(idx, idea);
}

void	Cat::makeSound(void) const {
	std::cout << getType() << ": meow meow" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Cat &obj) {
	out << "Type: " << obj.getType() << std::endl;
	out << "Ideas: " << std::endl;
	for (size_t i = 0; i < 100 && obj.getIdea(i).compare("Default idea") != 0; i++)
		out << "💡 " << obj.getIdea(i) << std::endl;
	return out;
}
