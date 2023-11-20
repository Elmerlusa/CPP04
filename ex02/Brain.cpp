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
	std::cout << "Brain's copy constructor called" << std::endl;
	std::copy(newBrain.getIdeas(), newBrain.getIdeas() + 100, this->ideas);
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
		std::copy(brain.getIdeas(), brain.getIdeas() + 100, this->ideas);
	return *this;
}
