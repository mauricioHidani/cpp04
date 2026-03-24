/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:35:32 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 19:23:00 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: virtual public AAnimal {
private:
	Brain	*_brain;

	Dog(const std::string& type);

public:
	Dog(void);
	Dog(const Dog &other);
	Dog &operator=(const Dog& other);
	virtual ~Dog(void);
	
	Brain* getBrain(void) const;
	std::string getIdea(const size_t idx) const;
	void setIdea(const size_t idx, const std::string &idea);

	void makeSound(void) const;
};

std::ostream &operator<<(std::ostream &out, const Dog &obj);
