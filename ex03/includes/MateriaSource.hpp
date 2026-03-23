/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:19:09 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/23 18:52:39 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource: public IMateriaSource {
private:
	AMateria*	_learned[4];
	size_t		_index;

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource& other);
	virtual ~MateriaSource(void);

	void learnMateria(AMateria *materia);
	AMateria* createMateria(std::string const & type);
};
