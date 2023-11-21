/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:08:13 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/29 15:08:13 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("AAnimalDefaultType")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& animal): type(animal.getType())
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string& type): type(type)
{
	std::cout << "AAnimal parametized constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal default destructor called" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return this->type;
}

AAnimal&	AAnimal::operator=(const AAnimal& animal)
{
	if (this != &animal)
		this->type = animal.getType();
	return *this;
}