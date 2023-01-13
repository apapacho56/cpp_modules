/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:58:41 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 15:30:25 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_H

#define WRONG_H

#define CYAN    "\033[36m"
#define RESET   "\033[0m"
#define GREEN   "\033[32m"


#include "Animal.hpp"

class WrongAnimal{
	protected:
		std::string _type;
	public:
		/* Const & Dest */
		WrongAnimal();
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &copy);
		virtual ~WrongAnimal();

		/* Operator */
		WrongAnimal const	&operator=(WrongAnimal const &copy);

		/* Get & Set */
		std::string const	&getType()const;
		void				setType(std::string const &type);

		/* Main */
		void	makeSound() const;
};

class WrongCat: public WrongAnimal{
	private:
		std::string _type;
	public:
		/* Const & Dest */
		WrongCat();
		WrongCat(std::string const &type);
		WrongCat(WrongCat const &copy);
		~WrongCat();

		/* Operator */
		WrongCat const	&operator=(WrongCat const &copy);

		/* Get & Set */
		std::string const		&getType()const;
		void				setType(std::string const &type);

		/* Main */
		void	makeSound() const;
};

#endif
