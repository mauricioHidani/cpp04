/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:37:28 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 20:16:26 by mhidani          ###   ########.fr       */
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

	void	makeSound(void) const;
};