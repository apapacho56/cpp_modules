/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:11:33 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 14:43:04 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#define RED     "\033[31m"
#define RESET   "\033[0m"

# include "Animal.hpp"

class Dog: public Animal{
	private:
		std::string _type; 
	public:
		/* Const & Dest */
		Dog();
		Dog(std::string const &copy);
		Dog(Dog const &copy);
		~Dog();

		/* Operator */
		Dog const	&operator=(Dog const &copy);

		/* Get & Set */
		std::string const	&getType() const;
		void		setType(std::string const &type);
		
		/* Main */
		void makeSound() const;
};
#endif