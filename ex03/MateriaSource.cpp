/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:00:01 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 19:00:01 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		const AMateria*	aux = materiaSource.getAMateria(i);
		
		this->_inventory[i] = aux != NULL ? aux->clone() : NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

const AMateria*	MateriaSource::getAMateria(const int idx) const
{
	return (idx < 0 || idx > 3) ? NULL : this->_inventory[idx];
}

void	MateriaSource::learnMateria(AMateria* aMateria)
{
	if (aMateria == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = aMateria->clone();
			return ;
		}
	}
	std::cout << "MateriaSource full!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL && type.compare(this->_inventory[i]->getType()) == 0)
			return this->_inventory[i]->clone();
	}
	return NULL;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& materiaSource)
{
	if (this != &materiaSource)
	{
		for (int i = 0; i < 4; i++)
		{
			const AMateria*	aux = materiaSource.getAMateria(i);
			
			delete(this->_inventory[i]);
			this->_inventory[i] = aux != NULL ? aux->clone() : NULL;
		}
	}
	return *this;
}
