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

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// Deep copy
	const Dog*	j = new Dog();
	const Dog*	i = new Dog(*j);

	std::cout << "Original Dog's brain is allocated in " << &j->getBrain() << " and its ideas in " << j->getBrain().getIdeas()
		<< "\nCopy's brain is allocated in " << &i->getBrain() << " and its ideas in " << i->getBrain().getIdeas() << std::endl;
	delete j;
	delete i;
	std::cout << "-------------------------------------------------" << std::endl;
	// Array
	const unsigned int	size = 4;
	Animal*	animals[size];
	
	if (size == 0)
		return 0;
	for (unsigned int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (unsigned int i = size / 2; i < size; i++)
		animals[i] = new Cat();
	for (unsigned int i = 0; i < size; i++)
		animals[i]->makeSound();
	for (unsigned int i = 0; i < size; i++)
		delete animals[i];
	return 0;
}
