/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:08:13 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/29 15:08:13 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AANIMAL_HPP_
# define _AANIMAL_HPP_

# include <iostream>
# include <string>

class	AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal(void);
		AAnimal(const AAnimal& animal);
		AAnimal(const std::string& type);
		virtual ~AAnimal(void);

		std::string	getType(void) const;

		virtual void	makeSound(void) const = 0;
		
		AAnimal&		operator=(const AAnimal& animal);
};

#endif
