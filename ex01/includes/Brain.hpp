/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:44:25 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/24 17:48:48 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
private:
	std::string	_ideas[100];

public:
	Brain(void);
	Brain(const std::string ideas[100]);
	Brain(const Brain& other);
	Brain &operator=(const Brain &other);
	virtual ~Brain(void);

	std::string getIdea(const size_t idx) const;
	void setIdea(const size_t idx, const std::string &idea);
};
