/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:33:35 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:33:35 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	ICharacter*		c = new Character("Jose Juan");
	IMateriaSource*	m = new MateriaSource;
	AMateria*	i = new Ice;
	AMateria*	a = new Cure;
	
	m->learnMateria(i);
	m->learnMateria(a);
	c->unequip(10);
	c->equip(i);
	c->equip(m->createMateria(i->getType())); // 1 - Ice
	c->equip(m->createMateria(a->getType())); // 2 - Cure
	c->equip(a->clone()); // 3 - Cure
	c->equip(a); // inventorio lleno, liberamos al final
	c->unequip(0); // desequipamos i, liberamos al final
	c->use(0, *c); // vacio, no hace nada
	c->use(1, *c);
	c->use(2, *c);
	delete c;
	delete m;
	delete i;
	delete a;
	return 0;
}
