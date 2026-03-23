/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:30:51 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/19 18:23:25 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
protected:
	std::string	_type;

public:
	Animal(void);
	virtual ~Animal(void);

	std::string		getType(void) const;

	virtual void	makeSound(void) const = 0;
};
