/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:35:32 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 19:00:42 by mhidani          ###   ########.fr       */
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
	virtual ~Dog(void);

	void	makeSound(void) const;
};
