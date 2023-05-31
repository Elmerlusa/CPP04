/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:26:24 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/30 12:26:24 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

# include <iostream>
# include <string>

class	Brain
{
	protected:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const Brain& newBrain);
		~Brain(void);

		const std::string*	getIdeas(void) const;
};

#endif
