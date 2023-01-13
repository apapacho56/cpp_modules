/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:23:57 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 18:31:06 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"

# include "Animal.hpp"

class Cat: public Animal{
	private:
		Brain		*_brain;
	public:
		/* Const & Dest */
		Cat();
		Cat(Cat const &copy);
		~Cat();

		/* Operator */
		Cat const	&operator=(Cat const &copy);

		/* Get & Set */
		std::string const	&getType() const;
		Brain				&getBrain()const;

		void				setBrain(Brain const &brain);
		void				setType(std::string const &type);
		
		/* Main */
		void makeSound() const;
};
#endif