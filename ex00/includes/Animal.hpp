/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:30:51 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 17:19:04 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
protected:
	std::string	_type;

public:
	Animal(void);
	Animal(const Animal &other);
	Animal(const std::string &type);
	Animal &operator=(const Animal &other);
	virtual ~Animal(void);

	std::string getType(void) const;
	void setType(const std::string &type);

	virtual void makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Animal &obj);
