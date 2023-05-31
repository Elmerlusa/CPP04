/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:00:34 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 17:00:34 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AANIMAL_HPP_
# define _AANIMAL_HPP_

# include <iostream>
# include <string>

# include "Brain.hpp"

class	AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void);

		std::string	getType(void) const;

		virtual void	makeSound(void) const = 0;
};

#endif
