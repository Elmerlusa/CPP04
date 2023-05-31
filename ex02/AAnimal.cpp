/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:59:37 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 16:59:37 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal default destructor called" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return this->type;
}
