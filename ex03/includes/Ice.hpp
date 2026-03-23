/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 19:38:33 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/23 18:51:46 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include <iostream>

class Ice: public AMateria {
public:
	Ice(void);
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	virtual ~Ice(void);

	AMateria* clone(void) const;
	void use(ICharacter& target);
};
