/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:35:32 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/19 17:20:07 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: virtual public Animal {
private:
	Brain	*_brain;

public:
	Dog(void);
	Dog(const Dog &other);
	virtual ~Dog(void);

	std::string	getIdea(const size_t idx) const;
	void		setIdea(const size_t idx, const std::string &idea);

	void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Dog &obj);
