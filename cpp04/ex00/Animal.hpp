/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 22:54:19 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/09 23:13:03 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

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

		/* Main */
		virtual void makeSound() const;
};


#endif
