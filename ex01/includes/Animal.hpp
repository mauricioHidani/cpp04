/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:30:51 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:48:16 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
private:


protected:
	std::string	_type;

public:
	Animal(void);
	virtual ~Animal(void);

	std::string		getType(void) const;

	virtual void	makeSound(void) const;

	Animal			&operator=(const Animal &other);
};

std::ostream	&operator<<(std::ostream &out, const Animal &obj);
