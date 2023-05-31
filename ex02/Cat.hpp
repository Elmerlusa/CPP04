/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:08:43 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/29 15:08:43 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat: public AAnimal
{
	private:
		Brain*	brain;
	public:
		Cat(void);
		~Cat(void);

		Brain*	getBrain(void) const;

		Cat&	operator=(const Cat& newCat);

		void	makeSound(void) const;
};

#endif
