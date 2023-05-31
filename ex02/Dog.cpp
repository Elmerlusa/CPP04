/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:48:01 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 10:48:01 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): brain(new Brain)
{
	this->type = "Dog";
	std::cout << "Dog '" << this->type << "' constructed" << std::endl;
}

Dog::Dog(const Dog& newDog): brain(new Brain(*(newDog.getBrain())))
{
	this->type = newDog.getType();
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog default destructor called" << std::endl;
	delete this->brain;
}

Brain*	Dog::getBrain(void) const
{
	return this->brain;
}

Dog&	Dog::operator=(const Dog& newDog)
{
	std::cout << "Operador de asignación de la clase Dog" << std::endl;
	if (this != &newDog)
	{
		this->type = newDog.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(newDog.getBrain()));
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "GUUUUUAAAAUUUU" << std::endl;
}

void	Dog::analyseClass(void)
{
	void*	ideasPtr = static_cast<void*>(const_cast<std::string*>(this->brain->getIdeas()));
	
	std::cout << "Analysing Dog instance " << static_cast<void*>(this) << std::endl;
	std::cout << "Dog's type: " << this->type << std::endl;
	std::cout << "Brain's address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Brain's ideas(" << ideasPtr << "): ";
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << ", ";
	std::cout << std::endl;
}
