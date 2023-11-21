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

		const AMateria*	getAMateria(const int idx) const;
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& materiaSource);
		~MateriaSource(void);
		void	learnMateria(AMateria*);
		AMateria*	createMateria(std::string const& type);
		MateriaSource&	operator=(const MateriaSource& materiaSource);
};

#endif
