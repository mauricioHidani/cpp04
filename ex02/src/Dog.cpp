/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:41:13 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 19:02:15 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"), _brain(new Brain()) {
	std::cout << "Standard builder: The dog was adopted" << std::endl;
}

Dog::Dog(const std::string& type): Animal(type), _brain(new Brain()) {
	std::cout << "Builder by attribute: The dog was adopted" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other) {
	_brain = new Brain(*other.getBrain());
	std::cout << "Copy builder: The dog was adopted" << std::endl;
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other) {
		Animal::operator=(other);
		
		if (_brain)
			delete _brain;
		
		_brain = new Brain(*other.getBrain());
	}
	return *this;
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "Destructor: The dog is missing" << std::endl;
}

Brain* Dog::getBrain(void) const {
	return _brain;
}

std::string	Dog::getIdea(const size_t idx) const {
	if (idx >= 100) {
		std::cout << "Went beyond the scope of ideas" << std::endl;
		return std::string("Default idea");
	}
	return _brain->getIdea(idx);
}

void	Dog::setIdea(const size_t idx, const std::string &idea) {
	if (idx >= 100) {
		std::cout << "Went beyond the scope of ideas" << std::endl;
		return ;
	}
	_brain->setIdea(idx, idea);
}

void	Dog::makeSound(void) const {
	std::cout << getType() << ": ruff ruff" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Dog &obj) {
	out << "Type: " << obj.getType() << std::endl;
	out << "Ideas: " << std::endl;
	for (size_t i = 0; i < 100 && obj.getIdea(i).compare("Default idea") != 0; i++)
		out << "💡 " << obj.getIdea(i) << std::endl;
	return out;
}
