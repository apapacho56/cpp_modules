/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:27:53 by aparedes          #+#    #+#             */
/*   Updated: 2023/01/13 13:18:52 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm: public AForm{
	private:
		std::string		_target;
	public:
	/* Constructors & Destructors */
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		~RobotomyRequestForm();

		/* Basic Operators */
		RobotomyRequestForm const	&operator=(RobotomyRequestForm const &copy);

		/* Getter */
		std::string	const 	&getTarget()const;

		/* Main Member Functions */
		void	beExecute(Bureaucrat &bureaucrat)const;
		static AForm	*makeForm(AForm *form, std::string  const &type,std::string  const &target);

};

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &form);

#endif
