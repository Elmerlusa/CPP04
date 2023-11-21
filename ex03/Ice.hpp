/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:40:57 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:40:57 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
# define _ICE_HPP_

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice: public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& ice);
		~Ice(void);

		Ice*	clone(void) const;
		void	use(ICharacter& target);

		Ice&	operator=(const Ice& ice);
};

#endif
