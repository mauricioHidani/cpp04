/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:50:03 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 19:42:48 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = "Default idea";
}

Brain::Brain(const Brain &other) {
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = other.getIdea(i);
}

Brain::~Brain(void) {
}

void	Brain::setIdea(const size_t idx, const std::string &idea) {
	if (idx > 100) {
		std::cout << "The index has surpassed 100 points" << std::endl;
		return ;
	}
	if (idea.empty()) {
		std::cout << "The idea is empty" << std::endl;
		return ;
	}
	_ideas[idx] = idea;
}

std::string	Brain::getIdea(const size_t idx) const {
	if (idx > 100)
		return _ideas[100];
	return _ideas[idx];
}

Brain	&Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (size_t i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return *this;
}
