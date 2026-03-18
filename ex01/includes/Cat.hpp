/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:37:28 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:47:38 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat: virtual public Animal {
private:
	Brain	*brain;

public:
	Cat(void);
	virtual ~Cat(void);

	void	makeSound(void) const;
};