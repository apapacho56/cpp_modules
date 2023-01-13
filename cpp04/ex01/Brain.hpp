/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:47:28 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 18:41:17 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>


#define BLUE    "\033[34m"
#define RESET   "\033[0m"

class Brain{
	protected:
		std::string _ideas[100];
	public:
		/* Constr & Destr */
		Brain();
		Brain(Brain const &copy);
		~Brain();
		
		/* Basic Operators */
		Brain const	&operator=(Brain const &copy);

		/* Get and Set */
		std::string const	&getIdea(int const &index) const;
		void				setIdea(std::string const &idea, int const &index);
};

#endif