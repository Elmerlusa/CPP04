/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:36:25 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:36:25 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
	std::cout << "Character '" << this->_name << "' created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character(void)
{
	std::cout << "Character '" << this->_name << "' deleted" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

std::string const&	Character::getName(void) const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << this->getName() << "'s inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	std::cout << this->getName() << " has dropped " << idx << std::endl;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
