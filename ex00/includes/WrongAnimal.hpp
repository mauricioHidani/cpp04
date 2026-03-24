/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:14:09 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 17:36:08 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
private:
	void setType(const std::string& type);

protected:
	std::string	_type;

	WrongAnimal(const std::string& type);

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	~WrongAnimal(void);

	std::string getType(void) const;

	void		makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &out, const WrongAnimal &obj);