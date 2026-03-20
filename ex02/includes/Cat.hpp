/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:37:28 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/19 17:21:38 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat: virtual public Animal {
private:
	Brain	*_brain;

public:
	Cat(void);
	Cat(const Cat &other);
	virtual ~Cat(void);

	std::string	getIdea(const size_t &idx) const;
	void		setIdea(const size_t idx, const std::string &idea);

	void		makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Cat &obj);