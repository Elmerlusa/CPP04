/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:08:13 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/29 15:08:13 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>
# include <string>

class	Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal& animal);
		Animal(const std::string& type);
		virtual ~Animal(void);

		std::string	getType(void) const;

		virtual void	makeSound(void) const;
		
		Animal&			operator=(const Animal& animal);
};

#endif
