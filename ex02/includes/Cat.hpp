/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:37:28 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/22 12:58:46 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat: public Animal {
private:
	Brain	*_brain;

public:
	Cat(void);
	Cat(const Cat &other);
	virtual ~Cat(void);

	std::string	getIdea(const size_t &idx) const;
	void		setIdea(const size_t idx, const std::string &idea);

	void		makeSound(void) const;

	Cat	&operator=(const Cat &other);
};

std::ostream	&operator<<(std::ostream &out, const Cat &obj);