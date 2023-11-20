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

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog '" << this->type << "' constructed" << std::endl;
}

Dog::Dog(const Dog& dog): Animal(dog.getType())
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog default destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "GUUUUUAAAAUUUU" << std::endl;
}

Dog&	Dog::operator=(const Dog& dog)
{
	if (this != &dog)
		this->type = dog.getType();
	return *this;
}
