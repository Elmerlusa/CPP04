/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:31:08 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:31:08 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Default Ice destructor called" << std::endl;
}

Ice*	Ice::clone(void) const
{
	return new Ice;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
