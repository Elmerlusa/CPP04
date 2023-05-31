/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:33:38 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 12:33:38 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// const AAnimal a;
	const Dog	d;
	const Cat	c;
	d.makeSound();
	c.makeSound();
	return 0;
}
