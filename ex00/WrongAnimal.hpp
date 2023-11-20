/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:18:22 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 12:18:22 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

# include <iostream>
# include <string>

class	WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& wrongAnimal);
		WrongAnimal(const std::string& type);
		virtual ~WrongAnimal(void);

		std::string	getType(void) const;

		void	makeSound(void) const;

		WrongAnimal&	operator=(const WrongAnimal& wrongAnimal);
};

#endif
