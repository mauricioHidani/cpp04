/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:30:51 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 18:30:23 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
protected:
	std::string	_type;

	void setType(const std::string& type);
	
public:
	Animal(void);
	Animal(const std::string& type);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal(void);

	std::string		getType(void) const;

	virtual void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Animal &obj);
