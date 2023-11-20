/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:18:45 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 12:18:45 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& wrongCat);
		~WrongCat(void);

		void	makeSound(void) const;

		WrongCat&	operator=(const WrongCat& wrongCat);
};

#endif
