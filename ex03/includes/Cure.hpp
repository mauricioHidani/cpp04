/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 19:38:19 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/23 18:51:31 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
public:
	Cure(void);
	Cure(const Cure& other);
	Cure& operator=(const Cure &other);
	virtual ~Cure(void);

	AMateria *clone(void) const;
	void use(ICharacter& target);
};
