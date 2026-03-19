/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:35:28 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/19 17:47:28 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	Animal	*dog = new Dog();
	Cat		*cat = new Cat();
	size_t	i = 0;

	cat->setIdea(i++, "I think, therefore I am (René Descartes)");
	cat->setIdea(i++, "The unexamined life is not worth living. (Sócrates)");
	cat->setIdea(i++, "If I have seen further, it is by standing on the shoulders of giants. (Isaac Newton)");
	cat->setIdea(i++, "Happiness is not something ready-made. It comes from your own actions. (Dalai Lama)");
	cat->setIdea(i++, "In the middle of difficulty lies opportunity. (Albert Einstein)");
	cat->setIdea(i++, "To be, or not to be, that is the question. (William Shakespeare)");
	cat->setIdea(i++, "Courage is the first of human qualities because it guarantees all others. (Aristóteles)");
	cat->setIdea(i++, "All that we are is the result of what we have thought. (Buda)");
	cat->setIdea(i++, "Imagination is more important than knowledge. (Albert Einstein)");
	cat->setIdea(i++, "Do not wait for a crisis to discover what is important in your life. (Platão)");

	std::cout << *dog << std::endl;
	std::cout << *cat << std::endl;

	delete dog;
	delete cat;

	return 0;
}
