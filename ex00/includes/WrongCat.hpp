/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:19:29 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:28:32 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal {
public:
	WrongCat(void);
	~WrongCat(void);

	void	makeSound(void) const;
};
