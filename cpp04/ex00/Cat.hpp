/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:23:57 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/11 13:20:21 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#define YELLOW  "\033[33m"
#define RESET   "\033[0m"

# include "Animal.hpp"

class Cat: public Animal{
	private:
		std::string _type; 
	public:
		/* Const & Dest */
		Cat();
		Cat(std::string &_type);
		Cat(Cat const &copy);
		~Cat();

		/* Operator */
		Cat const	&operator=(Cat const &copy);

		/* Get & Set */
		std::string const	&getType() const;
		void		setType(std::string const &type);
		
		/* Main */
		void makeSound() const;
};
#endif