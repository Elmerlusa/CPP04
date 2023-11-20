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

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal
{
	private:
		Brain*	brain;
	public:
		Cat(void);
		Cat(const Cat& cat);
		~Cat(void);

		const Brain&	getBrain(void) const;

		void	makeSound(void) const;

		Cat&	operator=(const Cat& cat);
};

#endif
