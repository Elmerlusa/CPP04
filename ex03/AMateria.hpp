/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:13:03 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:13:03 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class	AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(std::string const& type);
		virtual ~AMateria(void);

		std::string const& getType(void) const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
