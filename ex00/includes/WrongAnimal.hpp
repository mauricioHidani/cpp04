/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:14:09 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:15:29 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
protected:
	std::string	_type;

public:
	WrongAnimal(void);
	~WrongAnimal(void);

	std::string	getType(void) const;

	void		makeSound(void) const;

	WrongAnimal	&operator=(const WrongAnimal &other);
};

std::ostream	&operator<<(std::ostream &out, const WrongAnimal &obj);