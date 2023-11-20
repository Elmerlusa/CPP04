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

class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog& dog);
		~Dog(void);

		void	makeSound(void) const;

		Dog&	operator=(const Dog& dog);
};

#endif
