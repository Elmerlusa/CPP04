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

Dog::Dog(void): Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog '" << this->type << "' constructed" << std::endl;
}

Dog::Dog(const Dog& dog): Animal(dog.getType()), brain(new Brain())
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog default destructor called" << std::endl;
	delete this->brain;
}

const Brain&	Dog::getBrain(void) const
{
	return *this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "GUUUUUAAAAUUUU" << std::endl;
}

Dog&	Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		this->type = dog.getType();
		delete this->brain;
		this->brain = new Brain(dog.getBrain());
	}
	return *this;
}
