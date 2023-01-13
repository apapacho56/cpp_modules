/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:11:33 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 18:31:11 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#define RED     "\033[31m"
#define RESET   "\033[0m"

# include "Animal.hpp"

class Dog: public Animal{
	private:
		Brain* _brain;
	public:
		/* Const & Dest */
		Dog();
		Dog(Dog const &copy);
		~Dog();

		/* Operator */
		Dog const	&operator=(Dog const &copy);

		/* Get & Set */
		std::string const	&getType() const;
		Brain 				&getBrain() const;

		void				setBrain(Brain const &brain);
		void				setType(std::string const &type);
		
		/* Main */
		void makeSound() const;
};
#endif