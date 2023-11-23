/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:26:23 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 12:26:23 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain's default constructor called" << std::endl;
}

Brain::Brain(const Brain& newBrain)
{
	const std::string*	newIdeas = newBrain.getIdeas();

	std::cout << "Brain's copy constructor called" << std::endl;
	for (unsigned int i = 0; i < 100; i++)
		this->ideas[i] = newIdeas[i];
}

Brain::~Brain(void)
{
	std::cout << "Brain's default destructor called" << std::endl;
}

const std::string*	Brain::getIdeas(void) const
{
	return this->ideas;
}

Brain&	Brain::operator=(const Brain& brain)
{
	if (this != &brain)
	{
		const std::string*	newIdeas = brain.getIdeas();

		for (unsigned int i = 0; i < 100; i++)
			this->ideas[i] = newIdeas[i];
	}
	return *this;
}
