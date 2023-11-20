/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:19:23 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 12:19:23 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat '" << this->type << "' constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat): WrongAnimal(wrongCat.getType())
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "MIIIIIIAAAAAAUUUUU" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& wrongCat)
{
	if (this != &wrongCat)
		this->type = wrongCat.getType();
	return *this;
}
