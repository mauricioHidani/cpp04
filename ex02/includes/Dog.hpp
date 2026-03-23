/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:35:32 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/22 12:57:32 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public Animal {
private:
	Brain	*_brain;

public:
	Dog(void);
	Dog(const Dog &other);
	virtual ~Dog(void);

	std::string	getIdea(const size_t idx) const;
	void		setIdea(const size_t idx, const std::string &idea);

	void	makeSound(void) const;

	Dog	&operator=(const Dog &other);
};

std::ostream	&operator<<(std::ostream &out, const Dog &obj);
