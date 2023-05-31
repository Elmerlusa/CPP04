/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:35:41 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:35:41 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Character: public ICharacter
{
	protected:
		std::string	_name;
		AMateria*	_inventory[4];
	public:
		Character(std::string name);
		~Character(void);
		std::string const& getName(void) const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
