/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:17:34 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:17:34 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type("DefaultAMateriaType")
{
	std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(std::string const& type): _type(type)
{
	std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(const AMateria& materia): _type(materia.getType())
{
	std::cout << "AMateria " << this->_type << " copied" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria " << this->_type << " deleted" << std::endl;
}

std::string const&	AMateria::getType(void) const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used " << target.getName() << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& materia)
{
	if (this != &materia)
		this->_type = materia.getType();
	return *this;
}
