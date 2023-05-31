/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:08:11 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/29 15:08:11 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->type;
}

Animal&	Animal::operator=(const Animal& newAnimal)
{
	std::cout << "Operador de asignación de la clase Animal" << std::endl;
	if (this != &newAnimal)
		this->type = newAnimal.type;
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "I'm an animal!" << std::endl;
}
