/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:08:51 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/29 15:08:51 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain*	brain;
	public:
		Dog(void);
		Dog(const Dog& dog);
		~Dog(void);

		const Brain&	getBrain(void) const;

		void	makeSound(void) const;

		Dog&	operator=(const Dog& dog);
};

#endif
