/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:44:25 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/18 18:51:49 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
private:
	std::string	_ideas[100];

public:
	Brain(void);
	virtual ~Brain(void);

	void		setIdea(const size_t idx, const std::string &idea);
	std::string	getIdea(const size_t idx);
};
