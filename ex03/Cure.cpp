/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:28:12 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:28:12 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Default Cure destructor called" << std::endl;
}

Cure*	Cure::clone(void) const
{
	return new Cure;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
