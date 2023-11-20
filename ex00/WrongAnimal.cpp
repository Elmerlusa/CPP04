/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:17:44 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 12:17:44 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimalDefaultType")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal): type(wrongAnimal.getType())
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type): type(type)
{
	std::cout << "WrongAnimal parametized constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I'm a WrongAnimal!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
	if (this != &wrongAnimal)
		this->type = wrongAnimal.getType();
	return *this;
}
