/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:09:03 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/29 15:09:03 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): AAnimal("Cat"), brain(new Brain())
{
	std::cout << "Cat '" << this->type << "' constructed" << std::endl;
}

Cat::Cat(const Cat& cat): AAnimal(cat.getType()), brain(new Brain())
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
	delete this->brain;
}

const Brain&	Cat::getBrain(void) const
{
	return *this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "MIIIIIIAAAAAAUUUUU" << std::endl;
}

Cat&	Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		this->type = cat.getType();
		delete this->brain;
		this->brain = new Brain(cat.getBrain());
	}
	return *this;
}
