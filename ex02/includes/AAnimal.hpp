/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:30:51 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 19:20:47 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal {
protected:
	std::string	_type;

	void setType(const std::string& type);
	
public:
	AAnimal(void);
	AAnimal(const std::string& type);
	AAnimal(const AAnimal& other);
	AAnimal& operator=(const AAnimal& other);
	virtual ~AAnimal(void);

	std::string		getType(void) const;

	virtual void	makeSound(void) const = 0;
};

std::ostream	&operator<<(std::ostream &out, const AAnimal &obj);
