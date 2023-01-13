/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 22:54:19 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 21:41:26 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# include "Brain.hpp"


class Animal{
	protected:
		std::string _type;
	public:
		/* Constr & Destr */
		Animal();
		Animal(std::string const &type);
		Animal(Animal const &copy);
		virtual ~Animal();
		
		/* Basic Operators */
		Animal const	&operator=(Animal const &copy);

		/* Get and Set */
		std::string const	&getType() const;
		void	setType(std::string const &type);

		virtual Brain				&getBrain()const = 0; // must be overwriten by a subclass pure virtual

		/* Main */
		virtual void makeSound() const;
};


#endif
