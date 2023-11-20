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

Animal::Animal(void): type("AnimalDefaultType")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& animal): type(animal.getType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::Animal(const std::string& type): type(type)
{
	std::cout << "Animal parametized constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->type;
}

void	Animal::makeSound(void) const
{
	std::cout << "I'm an animal!" << std::endl;
}

Animal&	Animal::operator=(const Animal& animal)
{
	if (this != &animal)
	{
		this->type = animal.getType();
	}
	return *this;
}
