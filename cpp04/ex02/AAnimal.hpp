/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 22:54:19 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/10 21:52:23 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>
# include <string>

class AAnimal{
	protected:
		std::string _type;
	public:
		/* Constr & Destr */
		AAnimal();
		AAnimal(std::string const &type);
		AAnimal(AAnimal const &copy);
		virtual ~AAnimal();
		
		/* Basic Operators */
		AAnimal const	&operator=(AAnimal const &copy);

		/* Get and Set */
		std::string const	&getType() const;
		void	setType(std::string const &type);

		/* Main */
		virtual void makeSound() const = 0;
};


#endif
