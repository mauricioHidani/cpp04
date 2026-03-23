/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 19:38:57 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/23 18:50:54 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ICharacter;

class AMateria {
protected:
	std::string	type;

public:
	AMateria(const std::string& type);
	virtual ~AMateria(void);

	std::string getType(void) const;
 
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
};
