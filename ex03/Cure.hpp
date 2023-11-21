/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:25:22 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:25:22 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP_
# define _CURE_HPP_

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure: public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& cure);
		~Cure(void);

		Cure*	clone(void) const;
		void	use(ICharacter& target);

		Cure&	operator=(const Cure& cure);
};

#endif
