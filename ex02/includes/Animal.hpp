/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:30:51 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/20 19:05:45 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include <iostream>

class Animal: virtual public AAnimal {
private:
	std::string	_type;

public:
	Animal(void);
	virtual ~Animal(void);

	std::string		getType(void) const;

	virtual void	makeSound(void) const;

	Animal			&operator=(const Animal &other);
};

std::ostream	&operator<<(std::ostream &out, const Animal &obj);
