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

Cat::Cat(void): brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat '" << this->type << "' constructed" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
	delete this->brain;
}

Brain*	Cat::getBrain(void) const
{
	return this->brain;
}

Cat&	Cat::operator=(const Cat& newCat)
{
	std::cout << "Operador de asignación de la clase Cat" << std::endl;
	if (this != &newCat)
	{
		this->type = newCat.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(newCat.getBrain()));
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "MIIIIIIAAAAAAUUUUU" << std::endl;
}
