/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:59:47 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 18:59:47 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

# include <string>

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class	MateriaSource: public IMateriaSource
{
	protected:
		AMateria*	_inventory[4];
	public:
		MateriaSource(void);
		~MateriaSource(void);
		void	learnMateria(AMateria*);
		AMateria*	createMateria(std::string const& type);
};

#endif
