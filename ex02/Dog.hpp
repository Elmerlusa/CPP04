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

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog: public AAnimal
{
	private:
		Brain*	brain;
	public:
		Dog(void);
		Dog(const Dog& newDog);
		~Dog(void);

		Brain*	getBrain(void) const;

		Dog&	operator=(const Dog& newDog);

		void	makeSound(void) const;
		void	analyseClass(void);
};

#endif
